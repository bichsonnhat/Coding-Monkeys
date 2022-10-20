#include <iostream>
using namespace std;
int main()
{
	int x;
	cout << "Nhap x:";
	cin >> x;
	long S = 0;
	cout << "Gia tri la: ";
	if (x >= 0)
	{
		if (x > 1)
			S = 2 * x * x * x + 5 * x * x - 8 * x + 3;
		else
			S = 5 * x - 7;
	}
	else
		S = -2 * x * x * x + 6 * x + 9;
	cout << S;
	return 0;
}