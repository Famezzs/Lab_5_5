// Lab_5_5.cpp
// Козубенко Андрій
// Лабораторна робота № 5.5
// Рекурсивні функції.
// Варіант 10
#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;

double RecPow(const double base, const int exponent, const int level, int &depth)
{
	if (level > depth)
		depth = level;
	cout << " Level = " << level << endl;

	if (exponent == 0)
		return 1;
	else
		if (exponent < 0)
			return 1. / RecPow(base, abs(exponent), level + 1, depth);
		else
			return base * RecPow(base, exponent - 1, level + 1, depth);
}

int main()
{
	double x;
	int n;
	cout << "x = "; cin >> x;
	cout << "n = "; cin >> n;
	cout << endl;

	int depth = 0;
	cout << endl << x << " to the power of " << n << " = " << RecPow(x, n, 1, depth) << endl;
	cout << " Depth = " << depth << endl;

	return 0;
}