#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n:";
	cin >> n;
	bool flag = 1;
	int t = n;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 == 1)
			flag = 0;
		t = t / 10;
	}
	if (flag == 1)
		cout << "Toan chan";
	else
		cout << "Khong toan chan";
	return 0;
}