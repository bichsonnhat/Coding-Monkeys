#include<iostream>
using namespace std;
int main()
{
	float a, b;
	cout << "Nhap a = ";
	cin >> a;
	cout << "Nhap b = ";
	cin >> b;
	if (a < 0)
		a = -a;
	if (b < 0)
		b = -b;
	cout << "a = " << a << " b = " << b;
	return 0;
}