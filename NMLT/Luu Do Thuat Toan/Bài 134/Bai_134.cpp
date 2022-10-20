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
	int z;
	cout << "Nhap z:";
	cin >> z;
	if (x <= y && y <= z)
		cout << "Bat dang thuc dung";
	else
		cout << "Bang dang thuc khong dung";
	return 0;
}