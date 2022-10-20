#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a; 
	cout << "Nhap a:";
	cin >> a;
	int b;
	cout << "Nhap b:";
	cin >> b;
	int c;
	cout << "Nhap c:";
	cin >> c;
	float denta = b * b - 4 * a * c;
	if (denta <= 0)
	{
		if (denta == 0)
			cout << "Co nghiem kep: " << - b / (2 * a);
		else
			cout << "Vo nghiem";
	}
	else
	{
		float x1 = (- b + sqrt(denta)) / (2 * a);
		float x2 = (-b - sqrt(denta)) / (2 * a);
		cout << "Co hai nghiem: " << x1 << ' ' << x2;
	}
	return 0;
}