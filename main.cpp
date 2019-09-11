#define NDEBUG
#include "Header.h"
#include <iostream>
#include <sstream> 
#include <cstdlib> // дл€ system("pause");

using namespace std;


int main() {
	setlocale(LC_ALL, "Russian");
	/*double xa, ya, xb, yb, xc, yc;
	cout << "введите координаты точек: xa, ya, xb, yb, xc, yc" << endl;
	cin >> xa >> ya >> xb >> yb >> xc >> yc;
	cout << squaretri(xa, ya, xb, yb, xc, yc) << endl;*/
	int n;
	double x;
	cout << "¬ведите числа: " << endl;
	cin >> x >> n;
	sumRNums(x,n);
	/*int n;
	cout << "¬ведите число: " << endl;
	cin >> n;
	digitsCountAndSum(n);
	countNegsumPositive();
	int a, b;
	cout << "введите а и b, a < b" << endl;
	cin >> a >> b;
	notOdd(a, b);
	FindMax(3);
	double a, b, c;
	cout << "введите длины строн: a, b, c" << endl;
	cin >> a >> b >> c;
	cout << "площадь = " << sqrtri(a, b, c) << endl;
	test_distance();
	double x1, y1, x2, y2;
	cout << "введите координаты точек: x1, y1, x2, y2" << endl;
	cin >> x1 >> y1 >> x2 >> y2;
	cout << distance(x1, y1, x2, y2) << endl;
	cout << sqr(12.23) << endl;*/
	system("pause");
	return 0;
}
