#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n:";
	cin >> n;
	int dn = 0;
	int t = n;
	while (t != 0)
	{
		dn = dn * 10 + (t % 10);
		t = t / 10;
	}
	if (dn == n)
		cout << "So doi xung";
	else
		cout << "Khong la so doi xung";
	return 0;
}