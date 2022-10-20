#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n = ";
	cin >> n;
	float s = 1;
	int dau = -1;
	int m = 1;
	int i = 2;
	while (i <= n)
	{
		m = m + i;
		s = s + dau * ((float)1 / m);
		dau = -dau;
		i = i + 1;
	}
	cout << "Tong la = " << s;
	return 1;
}