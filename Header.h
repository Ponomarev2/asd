#include <cassert>
#include <iostream>
#include <cmath>

using namespace std;

double distance(double x1, double y1, double x2, double y2);

double distance(double x1, double y1, double x2, double y2) {
	return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

bool test_distance();
const double precision = 1E-16;

inline bool test_distance()
{
	double x1 = 0, y1 = 0;
	double x2 = 1, y2 = 0;
	double result = 1;

	// Тест 1 - единичный отрезок
	assert(abs(distance(x1, y1, x2, y2) - result) < precision);

	return true;

}

double sqr(double x);

inline double sqr(double x)
{
	return x * x;
}


double sqrtri(double a, double b, double c);

inline double sqrtri(double a, double b, double c)
{
	double p = (a + b + c) / 2;

	return sqrt(p * (p - a) * (p - b) * (p - c));
}

double squaretri(double xa, double ya, double xb, double yb, double xc, double yc);

inline double squaretri(double xa, double ya, double xb, double yb, double xc, double yc)
{
	double ab = distance(xa, ya, xb, yb);
	double ac = distance(xa, ya, xc, yc);
	double bc = distance(xb, yb, xc, yc);

	return sqrtri(ab, ac, bc);
}

void FindMax(int n);

inline void FindMax(int n) {
	int max, x;
	cout << "Введите " << n << " элементов" << endl;
	cin >> max;
	for (int i = 1; i < n; ++i) {
		cin >> x;
		if (x > max)
			max = x;
	}
	cout << "Maximum = " << max << endl;
}

inline void notOdd(int a, int b) {
	int k = 0;
	a > b ? swap(a, b) : a = a;
	for (int i = b; i >= a; i -= 1) {
		if (i % 2 == 0) {
			cout << i << " ";
			k++;
		}
	}
	cout << "количество четных = " << k << endl;
}

inline void digitsCountAndSum(int n)
{
	int count = 0;
	int sum = 0;
	for (int i = n; i > 0; i = i / 10) {
		count++;
		sum += i % 10;
	}
	cout << "Количество цифр: " << count << " Сумма цифр: " << sum << endl;
	system("pause");
}

void countNegsumPositive() {
	int n = 1;
	int countNeg = 0;
	int sumPos = 0;
	while (n != 0)
	{
		cout << "Введите число: ";
		cin >> n;
		if (n < 0) {
			countNeg++;
		}
		else
		{
			sumPos += n;
		}
	}
	cout << countNeg << " " << sumPos << endl;
	system("pause");
}

void sumRNums(double x, int n) {
	double sum = 1;
	int fac = 1;
	double xdeg = x;
	for (int i = 0; i < n; i++) {
		fac *= i + 1;
		sum += (xdeg / fac);
		xdeg *= x;
	}
	cout << sum << endl;
	system("pause");
}