#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n:";
	cin >> n;
	int s = 0;
	int t = n;
	while (t != 0)
	{
		s = s * 10 + (t % 10);
		t = t / 10;
	}
	cout << "So dao nguoc cua n la: " << s;
	return 0;
}