#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n = ";
	cin >> n;
	int ht = (n / 100) % 10;
	cout << "Chu so hang tram la = ";
	cout << ht;
	return 0;
}