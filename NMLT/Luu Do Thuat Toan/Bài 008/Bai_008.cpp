#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n = ";
	cin >> n;
	float r;
	cout << "Nhap ban kinh r = ";
	cin >> r;
	float p = 2 * n * r * sin(3.14 / n);
	cout << "Chu vi la = ";
	cout << p;
	return 0;
}