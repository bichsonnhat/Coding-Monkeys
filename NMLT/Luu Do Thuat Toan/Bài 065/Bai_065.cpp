#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n = ";
	cin >> n;
	n = abs(n);
	int lc = n % 10;
	int t = n;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv < lc)
			lc = dv;
		t = t / 10;
	}
	cout << "Chu so nho nhat cua " << n << " la " << lc;
	return 1;
}