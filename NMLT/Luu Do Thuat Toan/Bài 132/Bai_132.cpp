#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
	float xA, yA, xB, yB, xC, yC, xM, yM;
	cout << "Nhap xA:";
	cin >> xA;
	cout << "Nhap yA:";
	cin >> yA;
	cout << "Nhap xB:";
	cin >> xB;
	cout << "Nhap yB:";
	cin >> yB;
	cout << "Nhap xC:";
	cin >> xC;
	cout << "Nhap yC:";
	cin >> yC;
	cout << "Nhap xM:";
	cin >> xM;
	cout << "Nhap yM:";
	cin >> yM;
	float SABC = 1 / 2 * abs(xA * yB + xB * yC + xC * yA - xB * yA - xC * yB - xA * yC);
	float SMAB = 1 / 2 * abs(xM * yA + xA * yB + xB * yM - xA * yM - xB * yA - xM * yB);
	float SMBC = 1 / 2 * abs(xM * yB + xB * yC + xC * yM - xB * yM - xC * yB - xM * yC);
	float SMCA = 1 / 2 * abs(xM * yC + xC * yA + xA * yM - xC * yM - xA * yC - xM * yA);
	if (SABC == SMAB + SMBC + SMCA)
		cout << "M o trong";
	else
		cout << "M o ngoai";
	return 0;
}