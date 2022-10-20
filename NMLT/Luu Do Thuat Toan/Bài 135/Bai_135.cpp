#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
	int n;
	cout << "Nhap n:";
	cin >> n;
	if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
		cout << "La nam nhuan";
	else
		cout << "Khong la nam nhuan";
	return 0;
}