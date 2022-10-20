#include <iostream>
using namespace std;
int main()
{
	int x;
	cout << "Nhap x:";
	cin >> x;
	int y;
	cout << "Nhap y:";
	cin >> y;
	int i = x;
	while (i <= y)
	{
		if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
			cout << i << " ";
		i = i + 1;
	}
	return 0;
}