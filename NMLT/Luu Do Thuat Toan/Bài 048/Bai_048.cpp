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
	int i = 1;
	while (i <= n)
	{
		s = s * (x + i);
		i = i + 1;
	}
	cout << "Tong la = " << s;
	return 0;
}