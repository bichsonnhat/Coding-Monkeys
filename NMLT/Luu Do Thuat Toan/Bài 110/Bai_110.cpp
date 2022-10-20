#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float s = 0;
	int dau = 1;
	float e = 4;
	int i = 1;
	while (e >= pow(10, -6))
	{
		e = (float)4 / i;
		s = s + dau * e;
		dau = -dau;
		i = i + 2;
	}
	cout << "Tong la = " << s;
	return 0;
}