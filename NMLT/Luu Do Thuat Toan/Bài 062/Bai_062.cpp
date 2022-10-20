#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n = ";
	cin >> n;
	int s = 0;
	int t = n;
	int dv = 0;
	while (t != 0)
	{
		dv = t % 10;
		if (dv % 2 == 0)
			s = s + dv;
		t = t / 10;
	}
	cout << "Tong cac chu so chan cua " << n << " la = " << s;
	return 1;
}