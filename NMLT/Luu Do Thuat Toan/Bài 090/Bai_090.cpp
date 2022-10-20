#include<iostream>
using namespace std;
int main()
{
	int x, n;
	cout << "Nhap x = ";
	cin >> x;
	cout << "Nhap n = ";
	cin >> n;
	float s = 0;
	int t = 1;
	int m = 1;
	int dau = -1;
	int i = 1;
	while (i <= n)
	{
		t = t * x;
		m = m * i;
		s = s + dau * ((float)t / m);
		dau = -dau;
		i = i + 1;
	}
	cout << "Tong la = " << s;
	return 0;
}