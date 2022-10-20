#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n = ";
	cin >> n;
	int s = 0;
	int i = 2;
	while (i <= n)
	{
		if (n % i == 0)
			s = s + i;
		i = i + 2;
	}
	cout << "Tong cac uoc so chan cua " << " n la = " << s;
	return 1;
}