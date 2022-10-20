#include<iostream>
using namespace std;
int main()
{
	int n, ahh;
	cout << "Nhap n = ";
	cin >> n;
	int att = -1;
	int at = 3;
	int tt = 2;
	int i = 2;
	while (i <= n)
	{
		tt = tt * 2;
		ahh = 5 * tt + 5 * at - att;
		i++;
		att = at;
		at = ahh;
	}
	cout << "So hang thu " << n << " la: " << ahh;
	return 0;
}