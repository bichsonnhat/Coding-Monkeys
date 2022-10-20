#include<iostream>
using namespace std;
int main()
{
	float x, y, z;
	cout << "Nhap x = ";
	cin >> x;
	cout << "Nhap y = ";
	cin >> y;
	cout << "Nhap z = ";
	cin >> z;
	if (x + y > z && y + z > x && x + z > y)
		cout << "La tam giac";
	else
		cout << "Ko la tam giac";
	return 0;
}