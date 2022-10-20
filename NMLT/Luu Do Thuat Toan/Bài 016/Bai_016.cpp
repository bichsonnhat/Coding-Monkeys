#include<iostream>
using namespace std;
int main()
{
	float x;
	cout << "Nhap x = ";
	cin >> x;
	float x2 = x * x;
	float x3 = x2 * x;
	float x6 = x3 * x3;
	float x9 = x6 * x3;
	cout << "x9 = ";
	cout << x9;
	return 0;
}