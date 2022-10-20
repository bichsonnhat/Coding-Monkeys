#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n:";
	cin >> n;
	int t = n;
	while (t >= 10)
	{
		t = t / 10;
	}
	cout << "Chu so dau tien cua so nguyen duong n la: " << t;
	return 0;
}