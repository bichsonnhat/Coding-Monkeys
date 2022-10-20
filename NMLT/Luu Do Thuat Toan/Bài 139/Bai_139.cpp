#include <iostream>
using namespace std;
int main()
{
	int a;
	cout << "Nhap a:";
	cin >> a;
	int b; 
	cout << "Nhap b:";
	cin >> b;
	if (a == 0)
	{
		if (b == 0)
			cout << "Vo so nghiem";
		else
			cout << "Vo nghiem";
	}
	else
		cout << -b / a;
	return 0;
}