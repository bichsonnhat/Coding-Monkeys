#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n = ";
	cin >> n;
	int tich = 1;
	int t = n;
	int dv = 0;
	while (t != 0)
	{
		dv = t % 10;
		tich = tich * dv;
		t = t / 10;
	}
	cout << "Tich cac chu so cua " << n << " la = " << tich;
	return 1;
}