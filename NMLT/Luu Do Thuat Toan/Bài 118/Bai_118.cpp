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
		ahh = (-9 * at - 24) / (5 * at + 13);
		at = ahh;
		i++;
	}
	cout << "So hang thu " << n << " la: " << ahh;
	return 0;
}