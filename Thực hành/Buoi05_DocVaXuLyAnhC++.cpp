// _SILENCE_EXPERIMENTAL_FILESYSTEM_DEPRECATION_WARNING
#include <opencv2/opencv.hpp>
#include <iostream>
#include <experimental/filesystem>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace cv;
using namespace std;
namespace fs = std::experimental::filesystem;

vector<string> loadDirectory(string);
void loadImgs(vector<string>, Mat[]);
void transformVectorImgs(Mat[], vector<vector<double>>&, int);
vector<int> sortIndexes(const vector<double>&, bool);
Mat makeCanvas(vector<Mat>&, int, int);

double cosineSimilarity(vector<double>, vector<double>, unsigned int);
double distance(vector<double>, vector<double>, unsigned int);


int main()
{
    // Variables Declaration
    Mat images[1000], mutiple_images;
    vector<Mat> images_need_to_show;
    vector<vector<double>> features1D;
    vector<string> all_image_paths;
    vector<int> sorted_indexes;
    vector<double> scores;
    int queried_index, number_of_results;
    double score;
    string queried_path, current_image_path;
    vector<double> queried_image, current_queried_image;
    string root_img_path;
    int num_images;

    // Read and load images from given folder
    root_img_path = "C:/Users/ADMIN/Desktop/Buoi05/Buoi05";
    all_image_paths = loadDirectory(root_img_path);
    num_images = all_image_paths.size();
    loadImgs(all_image_paths, images);
    transformVectorImgs(images, features1D, num_images);

    // Querying
    cout << "\nWhich index do you want to query: ";
    cin >> queried_index;

    cout << "\nHow many results do you want to return: ";
    cin >> number_of_results;

    // Choose the metric to calculate the difference between two images
    int algo;
    cout << "\nWhich metric do you want to use for calculating difference between vectors: ";
    cout << "\n0. Distance";
    cout << "\n1. Cosine similarity";
    cout << endl;
    cin >> algo;

    queried_image = features1D[queried_index];
    queried_path = all_image_paths[queried_index];

    for (int i = 0; i < num_images; i++) {
        current_image_path = all_image_paths[i];
        current_queried_image = features1D[i];
        switch (algo)
        {
        case 0:
        {
            // Distance metric (You have to code this function)
            score = distance(queried_image, current_queried_image, queried_image.size());
            break;
        }
        case 1:
        {
            // Cosine Similarity metric (You have to code this function)
            score = cosineSimilarity(queried_image, current_queried_image, queried_image.size());
            break;
        }
        }
        scores.push_back(score);
    }

    cout << "\n" << "Querying image: " << queried_path;
    cout << "\n" << number_of_results << " nearest images : ";

    sorted_indexes = sortIndexes(scores, false);

    for (int i = 1; i < number_of_results + 1; i++) {
        images_need_to_show.push_back(imread(all_image_paths[sorted_indexes[i]]));
    }

    mutiple_images = makeCanvas(images_need_to_show, 250, number_of_results / 5);
    imwrite("Results.png", mutiple_images);
    imshow("Results", mutiple_images);
    waitKey(0);
}

/**
 * Loading images into an Mat array variable.
 *
 * @param all_image_path directory of images
 * @param all_images Mat array that used to store images
 */

vector<string> loadDirectory(string root_img_path) {
    vector<string> all_image_paths;
    for (const auto& entry : fs::directory_iterator(root_img_path))
        for (const auto& image_path : fs::directory_iterator(entry.path()))
            all_image_paths.push_back(image_path.path().string());
    return all_image_paths;
}

void loadImgs(vector<string> all_image_paths, Mat all_images[]) {
    string img_path;
    for (int i = 0; i < all_image_paths.size(); i++) {
        img_path = all_image_paths[i];
        cout << "\nLoading image " << i << ": " << img_path << " ......";
        all_images[i] = imread(img_path, 0);
    }
}

/**
 * Transform 2D images to 1D vectors
 *
 * @param all_images Mat original array that used to store images
 * @param transformed_images Mat transformed array that used to store solved images
 */
void transformVectorImgs(Mat all_images[], vector<vector<double>>& features1D, int num_images) {
    for (int i = 0; i < num_images; i++) {
        Mat resized_image;
        Mat curr_image = all_images[i];
        resize(curr_image, resized_image, cv::Size(200, 200), 0.75, 0.75);
        Mat flat = resized_image.reshape(1, resized_image.total() * resized_image.channels());
        vector<double> vec = flat.isContinuous() ? flat : flat.clone();
        features1D.push_back(vec);
    }
}

/**
 * Sort an array
 *
 * @param v vector that need to be sorted
 * @param descending bool variable
 * @return vector stores sorted indexes
 */
vector<int> sortIndexes(const vector<double>& v, bool descending) {

    // initialize original index locations
    vector<int> idx(v.size());
    iota(idx.begin(), idx.end(), 0);

    // sort indexes based on comparing values in v
    // using std::stable_sort instead of std::sort
    // to avoid unnecessary index re-orderings
    // when v contains elements of equal values 
    if (descending)
        stable_sort(idx.begin(), idx.end(),
            [&v](int i1, int i2) {
                return v[i1] > v[i2];
            });
    else
        stable_sort(idx.begin(), idx.end(),
            [&v](int i1, int i2) {
                return v[i1] < v[i2];
            });

    return idx;
}

/**
 * @brief makeCanvas Makes composite image from the given images
 * @param vecMat Vector of Images.
 * @param windowHeight The height of the new composite image to be formed.
 * @param nRows Number of rows of images. (Number of columns will be calculated
 *              depending on the value of total number of images).
 * @return new composite image.
 */

 /**
  * @brief makeCanvas Makes composite image from the given images
  * @param vecMat Vector of Images.
  * @param windowHeight The height of the new composite image to be formed.
  * @param nRows Number of rows of images. (Number of columns will be calculated
  *              depending on the value of total number of images).
  * @return new composite image.
  */
  /**
   * @brief makeCanvas Makes composite image from the given images
   * @param vecMat Vector of Images.
   * @param windowHeight The height of the new composite image to be formed.
   * @param nRows Number of rows of images. (Number of columns will be calculated
   *              depending on the value of total number of images).
   * @return new composite image.
   */
cv::Mat makeCanvas(std::vector<cv::Mat>& vecMat, int windowHeight, int nRows) {
    int N = vecMat.size();
    nRows = nRows > N ? N : nRows;
    int edgeThickness = 10;
    int imagesPerRow = ceil(double(N) / nRows);
    int resizeHeight = floor(2.0 * ((floor(double(windowHeight - edgeThickness) / nRows)) / 2.0)) - edgeThickness;
    int maxRowLength = 0;

    std::vector<int> resizeWidth;
    for (int i = 0; i < N;) {
        int thisRowLen = 0;
        for (int k = 0; k < imagesPerRow; k++) {
            double aspectRatio = double(vecMat[i].cols) / vecMat[i].rows;
            int temp = int(ceil(resizeHeight * aspectRatio));
            resizeWidth.push_back(temp);
            thisRowLen += temp;
            if (++i == N) break;
        }
        if ((thisRowLen + edgeThickness * (imagesPerRow + 1)) > maxRowLength) {
            maxRowLength = thisRowLen + edgeThickness * (imagesPerRow + 1);
        }
    }
    int windowWidth = maxRowLength;
    cv::Mat canvasImage(windowHeight, windowWidth, CV_8UC3, Scalar(0, 0, 0));

    for (int k = 0, i = 0; i < nRows; i++) {
        int y = i * resizeHeight + (i + 1) * edgeThickness;
        int x_end = edgeThickness;
        for (int j = 0; j < imagesPerRow && k < N; k++, j++) {
            int x = x_end;
            cv::Rect roi(x, y, resizeWidth[k], resizeHeight);
            cv::Size s = canvasImage(roi).size();
            // change the number of channels to three
            cv::Mat target_ROI(s, CV_8UC3);
            vecMat[k].copyTo(target_ROI);
            cv::resize(target_ROI, target_ROI, s);
            if (target_ROI.type() != canvasImage.type()) {
                target_ROI.convertTo(target_ROI, canvasImage.type());
            }
            target_ROI.copyTo(canvasImage(roi));
            x_end += resizeWidth[k] + edgeThickness;
        }
    }
    return canvasImage;
}

/**
 * Calculate cosine similarity between two vectors
 *
 * @param A vector A
 * @param B vector B
 * @param size of both vectors
 * @return cosine similarity between
 */
double cosineSimilarity(vector<double> A, vector<double> B, unsigned int size)
{
    // CODING HERE ...
    int n = size;
    double mul = 1;
    
    double tA = 0, tB = 0;

    for (int i = 0; i < n; ++i) {
        mul *= A[i] * B[i];
        tA += A[i] * A[i];
        tB += B[i] * B[i];
    }

    tA = sqrt(tA);
    tB = sqrt(tB);

    double tAB = tA * tB;

    return (mul / tAB);
}

/**
 * Calculate distance between two vector A and B
 *
 * @param A vector A
 * @param B vector B
 * @param size of both vectors
 * @return distance score
 */
double distance(vector<double> A, vector<double> B, unsigned int size)
{
    // CODING HERE ...
    int n = size;
    double dis = 0;
    for (int i = 0; i < n; ++i) {
        dis += (A[i] - B[i]) * (A[i] - B[i]);
    }

    return sqrt(dis);
}