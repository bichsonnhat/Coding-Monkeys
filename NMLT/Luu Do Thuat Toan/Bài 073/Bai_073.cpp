#include<iostream>
using namespace std;
int main()
{
	int x, n;
	cout << "Nhap x = ";
	cin >> x;
	cout << "Nhap n = ";
	cin >> n;
	float s = 0;
	float t = 1;
	int m = 0;
	int i = 1;
	while (i <= n)
	{
		t = t * x;
		m = m + i;
		s = s + t / m;
		i = i + 1;
	}
	cout << "Tong la = " << s;
	return 1;
}