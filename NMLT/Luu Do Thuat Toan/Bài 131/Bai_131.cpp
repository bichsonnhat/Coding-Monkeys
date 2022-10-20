#include <iostream>
using namespace std;
int main() 
{
	int xA, yA, xB, yB, xC, yC;
	cout << "Nhap xA:"; 
	cin >> xA;
	cout << "Nhap yA";
	cin >> yA;
	cout << "Nhap xB";
	cin >> xB;
	cout << "Nhap yB";
	cin >> yB;
	cout << "Nhap xC";
	cin >> xC;
	cout << "Nhap yC";
	cin >> yC;
	float AB = sqrt((xB - xA) * (xB - xA) + (yB - yA) * (yB - yA));
	float AC = sqrt((xC - xA) * (xC - xA) + (yC - yA) * (yC - yA));
	float BC = sqrt((xC - xB) * (xC - xB) + (yC - yB) * (yC - yB));
	if (AB + AC > BC && AB + BC > AC && AC + BC > AB)
		cout << "La tam giac";
	else
		cout << "Khong la tam giac";
	return 0;
}