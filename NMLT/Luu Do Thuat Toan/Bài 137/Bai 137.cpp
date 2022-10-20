#include <iostream>
using namespace std;
int main()
{
	int x;
	cout << "Nhap x:";
	cin >> x;
	cout << "Gia tri la: ";
	if (x >= 5)
		cout << 2 * x * x + 5 * x + 9;
	else
		cout << -2 * x * x + 4 * x - 9;
	return 0;
}