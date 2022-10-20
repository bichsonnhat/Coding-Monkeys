#include<iostream>
using namespace std;
int main()
{
	float x;
	cout << "Nhap x = ";
	cin >> x;
	float x2 = x * x;
	float x3 = x2 * x;
	float x6 = x3 * x3;
	float x12 = x6 * x6;
	float x11 = x12 / x;
	cout << "x11 la = ";
	cout << x11;
	return 0;
}