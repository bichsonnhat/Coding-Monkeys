#include<iostream>
using namespace std;
int main()
{
	int n, ahh;
	cin >> n;
	int att = 1;
	int at = 1;
	int i = 2;
	while (i <= n)
	{
		ahh = at + att;
		att = at;
		at = ahh;
		i++;
	}
	cout << "So hang thu " << n << " la: " << ahh;
	return 0;
}