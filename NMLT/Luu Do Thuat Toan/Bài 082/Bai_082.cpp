#include<iostream>
#include<cmath>
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
	int i = 1;
	while (i <= n)
	{
		t = t * sin(x);
		s = s + t;
		i = i + 1;
	}
	cout << "Tong la = " << s;
	return 0;
}