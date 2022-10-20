#include<iostream>
using namespace std;
int main()
{
	int n, ahh, bhh;
	cin >> n;
	int at = 2;
	int bt = 1;
	int i = 2;
	while (i <= n)
	{
		ahh = at * at + 2*bt * bt;
		bhh = 2 * at * bt;
		i++;
		at = ahh;
		bt = bhh;
	}
	cout << "2 so hang thu n la: " << ahh << " " << bhh;
	return 0;
}