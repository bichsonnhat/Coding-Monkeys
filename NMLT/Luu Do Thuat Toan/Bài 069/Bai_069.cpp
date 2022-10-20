#include<iostream>
using namespace std;
int main()
{
	int x, n;
	cout << "Nhap x = ";
	cin >> x;
	cout << "Nhap n = ";
	cin >> n;
	int s = 0;
	int t = 1;
	int i = 1;
	while (i<=n)
	{
		t = t * x;
		s = s + t;
		i = i + 1;
	}
	cout << "Tong = " << s;
	return 1;
}