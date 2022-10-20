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
	float x7 = x6 * x;
	float x14 = x7 * x7;
	cout << "x14 la = ";
	cout << x14;
	return 0;
}