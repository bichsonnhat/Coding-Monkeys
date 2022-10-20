#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n = ";
	cin >> n;
	float at = 2, ahh;
	int i = 2;
	while (i <= n)
	{
		ahh = (at * at + 2) / (2 * at);
		at = ahh;
		i++;
	}
	cout << "So hang thu " << n << " la: " << ahh;
	return 0;
}