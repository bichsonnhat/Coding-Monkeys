#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n = ";
	cin >> n;
	int i = 2;
	int dem = 0;
	while (i <= n)
	{
		if (n % i == 0)
			dem++;
		i = i + 2;
	}
	cout << "So cac uoc so chan cua " << n << " la = " << dem;
	return 1;
}