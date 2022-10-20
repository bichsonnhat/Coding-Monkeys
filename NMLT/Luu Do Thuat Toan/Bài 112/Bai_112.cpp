#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float s = 4 - 0.5 - 0.2 - (float)1 / 6;
	float t = 1;
	float e = s;
	int i = 1;
	while (e >= pow(10, -6))
	{
		t = t * 16;
		e = ((float)4 / (8 * i + 1) - (float)2 / (8 * i + 4) - (float)1 / (8 * i + 5) - (float)1 / (8 * i + 6)) / t;
		s = s + e;
		i = i + 1;
	}
	cout << "Tong la = " << s;
	return 0;
}