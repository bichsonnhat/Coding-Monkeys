#include<iostream>
using namespace std;
int main()
{
	float a, b;
	cout << "Nhap a = ";
	cin >> a;
	cout << "Nhap b = ";
	cin >> b;
	float lc = a;
	if (lc < b)
		lc = b;
	cout << "Gia tri lon nhat la : " << lc;
	return 0;
}