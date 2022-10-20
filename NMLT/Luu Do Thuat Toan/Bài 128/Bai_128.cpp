#include<iostream>
using namespace std;
int main()
{
	float a, b;
	cout << "Nhap a = ";
	cin >> a;
	cout << "Nhap b = ";
	cin >> b;
	if (a > b)
	{
		float temp = a;
		a = b;
		b = temp;
	}
	cout << " " << a << " " << b;
	return 0;
}