#include<iostream>
using namespace std;
int main()
{
	float a, b;
	cout << "Nhap a = ";
	cin >> a;
	cout << "Nhap b = ";
	float lc = a;
	cin >> b;
	if (lc > b)
		lc = b;
	cout << "Gia tri nho nhat la : " << b;
	return 0;
}