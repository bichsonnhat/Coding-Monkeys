#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
	int x;
	cout << "Nhap x:";
	cin >> x;
	int y;
	cout << "Nhap y:";
	cin >> y;
	int z;
	cout << "Nhap z:";
	cin >> z;
	if (x + y > z && x + z > y && y + z > x)
	{
		if (x == y && y == z)
			cout << "Tam giac deu";
		else
		{
			if (x * x == y * y + z * z || y * y == x * x + z * z || z * z == x * x + y * y)
			{
				if (x == y || y == z || x == z)
					cout << "Tam giac vuong can";
				else
					cout << "Tam giac vuong";
			}
			else
			{
				if (x == y || y == z || x == z)
					cout << "Tam giac can";
				else
					cout << "Tam giac thuong";
			}
		}
	}
	else
		cout << "Khong la tam giac";
	return 0;
}