#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n = ";
	cin >> n;
	float s = 0;
	int i = 1;
	while (i <= 2 * n + 1)
	{
		s = s + (float)1 / i;
		i = i + 2;
	}
	cout << "Tong la = " << s;
	return 0;
}