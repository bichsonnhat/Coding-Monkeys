#include<iostream>
using namespace std;
int main()
{
	int n, ahh = 2;
	cout << "Nhap n = ";
	cin >> n;
	int att = 1;
	int at = 2;
	int i = 2;
	while (i <= n)
	{
		ahh = 4 * at + att;
		i++;
		att = at;
		at = ahh;
	}
	cout << "So hang thu " << n << " la: " << ahh;
	return 0;
}