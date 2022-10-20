#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float x;
	cout << "Nhap x = ";
	cin >> x;
	float s = 1 + x;
	float t = x;
	int m = 1;
	float e = 1 + x;
	int i = 2;
	while (e >= pow(10, -6))
	{
		t = t * x;
		m = m * i;
		e = t / m;
		s = s + e;
		i = i + 1;
	}
	cout << "Tong la = " << s;
	return 0;
}