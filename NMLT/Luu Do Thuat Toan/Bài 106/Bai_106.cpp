#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float x;
	cout << "Nhap x = ";
	cin >> x;
	float s = x;
	float t = x;
	int m = 1;
	int dau = -1;
	float e = x;
	int i = 3;
	while (e >= pow(10, -6))
	{
		t = t * x * x;
		m = m * i * (i - 1);
		e = t / m;
		s = s + dau * e;
		dau = -dau;
		i = i + 2;
	}
	cout << "Tong la = " << s;
	return 0;
}