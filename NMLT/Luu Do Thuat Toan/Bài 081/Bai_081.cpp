#include<iostream>
using namespace std;
int main()
{
	int x, n;
	cout << "Nhap x = ";
	cin >> x;
	cout << "Nhap n = ";
	cin >> n;
	float s = (float)1 / x;
	int m = x;
	int i = 1;
	while (i <= n)
	{
		m = m * (x + i);
		s = s + (float)1 / m;
		i = i + 1;
	}
	cout << "Tong la = " << s;
	return 0;
}