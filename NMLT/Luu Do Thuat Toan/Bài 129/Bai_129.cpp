#include<iostream>
using namespace std;
int main()
{
	float a, b, c;
	cout << "Nhap a = ";
	cin >> a;
	cout << "Nhap b = ";
	cin >> b;
	cout << "Nhap c = ";
	cin >> c;
	if (a > b)
	{
		float temp = a;
		a = b;
		b = temp;
	}
	if (a > c)
	{
		float temp = a;
		a = c;
		c = temp;
	}
	if (b > c)
	{
		float temp = b;
		b = c;
		c = temp;
	}
	cout << a << " " << b << " " << c;
	return 0;
}