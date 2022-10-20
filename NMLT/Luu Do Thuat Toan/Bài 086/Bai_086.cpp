#include<iostream>
using namespace std;
int main()
{
	int x, n;
	cout << "Nhap x = ";
	cin >> x;
	cout << "Nhap n = ";
	cin >> n;
	int s = 0;
	int t = 1;
	int i = 2;
	int dau = -1;
	while (i <= 2*n)
	{
		t = t * x * x;
		s = s + dau * t;
		i = i + 2;
		dau = -dau;
	}
	cout << "Tong la = " << s;
	return 0;
}