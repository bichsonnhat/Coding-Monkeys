#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n:";
	cin >> n;
	bool flag = 1;
	int t = n;
	while (t > 1)
	{
		if (t % 5 != 0)
			flag = 0;
		t = t / 5;
	}
	if (flag == 1)
		cout << "La dang thoa man";
	else
		cout << "Khong la dang thoa man";
	return 0;
}