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
		s = s + dv;
		t = t / 10;
	}
	cout << "Tong cac chu so cua " << n << " la = " << s;
	return 1;
}