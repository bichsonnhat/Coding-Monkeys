#include<iostream>
using namespace std;
int main()
{
	int n, ahh;
	cout << "Nhap n = ";
	cin >> n;
	int at = 2;
	int i = 2;
	while (i <= n)
	{
		ahh = at + 2 * i + 1;
		i = i + 1;
		at = ahh;
	}
	cout << "So hang thu " << n << " la: " << ahh;
	return 0;
}