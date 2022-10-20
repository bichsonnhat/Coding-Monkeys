#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n = ";
	cin >> n;
	float r;
	cout << "Nhap ban kinh r = ";
	cin >> r;
	float s = (0.5) * n * r * r * sin(2 * 3.14 / n);
	cout << "Dien tich la = ";
	cout << s;
	return 0;
}