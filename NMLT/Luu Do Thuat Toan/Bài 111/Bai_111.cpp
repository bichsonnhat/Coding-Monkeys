#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float s = 3;
	float e = 3;
	int dau = 1;
	int i = 2;
	while (e >= pow(10, -6))
	{
		e = (float)4 / (i * (i + 1) * (i + 2));
		s = s + dau * e;
		dau = -dau;
		i = i + 2;
	}
	cout << "Tong la = " << s;
	return 0;
}