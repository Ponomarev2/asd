#define NDEBUG
#include "Header.h"
#include <iostream>
#include <sstream> 
#include <cstdlib> // ��� system("pause");

using namespace std;


int main() {
	setlocale(LC_ALL, "Russian");
	/*double xa, ya, xb, yb, xc, yc;
	cout << "������� ���������� �����: xa, ya, xb, yb, xc, yc" << endl;
	cin >> xa >> ya >> xb >> yb >> xc >> yc;
	cout << squaretri(xa, ya, xb, yb, xc, yc) << endl;*/
	int n;
	double x;
	cout << "������� �����: " << endl;
	cin >> x >> n;
	sumRNums(x,n);
	/*int n;
	cout << "������� �����: " << endl;
	cin >> n;
	digitsCountAndSum(n);
	countNegsumPositive();
	int a, b;
	cout << "������� � � b, a < b" << endl;
	cin >> a >> b;
	notOdd(a, b);
	FindMax(3);
	double a, b, c;
	cout << "������� ����� �����: a, b, c" << endl;
	cin >> a >> b >> c;
	cout << "������� = " << sqrtri(a, b, c) << endl;
	test_distance();
	double x1, y1, x2, y2;
	cout << "������� ���������� �����: x1, y1, x2, y2" << endl;
	cin >> x1 >> y1 >> x2 >> y2;
	cout << distance(x1, y1, x2, y2) << endl;
	cout << sqr(12.23) << endl;*/
	system("pause");
	return 0;
}
