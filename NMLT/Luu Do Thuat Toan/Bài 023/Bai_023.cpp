#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n = ";
	cin >> n;
	int hc = (n / 10) % 10;
	cout << "Chu so hang chuc la = ";
	cout << hc;
	return 0;
}