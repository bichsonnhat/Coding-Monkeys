#include<iostream>
using namespace std;
int main()
{
	int x, n;
	cout << "Nhap x = ";
	cin >> x;
	cout << "Nhap n = ";
	cin >> n;
	int s = x;
	int t = x;
	int i = 3;
	int dau = -1;
	while (i <= 2 * n + 1)
	{
		t = t * x * x;
		s = s + dau * t;
		i = i + 2;
		dau = -dau;
	}
	cout << "Tong la = " << s;
	return 0;
}