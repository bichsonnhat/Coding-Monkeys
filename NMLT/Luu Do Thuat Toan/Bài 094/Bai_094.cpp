#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n = ";
	cin >> n;
	float s = 0;
	int i = 1;
	while (i <= n)
	{
		s = sqrt(i + s);
		i = i + 1;
	}
	cout << "Tong la = " << s;
	return 0;
}