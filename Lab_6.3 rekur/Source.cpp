#include <iostream>
#include <iomanip>
#include <time.h>
#include <Windows.h>

using namespace std;

int Create(int* a, const int size, const int Low, const int High, int i)
{
	a[i] = Low + rand() % (High - Low + 1);
	if (i < size - 1)
		Create(a, size, Low, High, i + 1);
	return 1;
}


void Print(int* a, const int size, int i)
{
	cout << "a[" << setw(2) << i << " ] = " << setw(4) << a[i] << endl;
	if (i < size - 1)
		Print(a, size, i + 1);
	else
		cout << endl;
}

int PairMax(int* a, const int size, int i, int max)
{
	if (a[i] > max && a[i] % 2 == 0)
		max = a[i];
	if (i < size - 1)
		return PairMax(a, size, i + 1, max);
	else
		return max;
}

int Find(int* a, const int size, int i)
{
	if (a[i] == PairMax(a, size, 0, a[0]))
		return a[i];
	if (i < size - 1)
		return Find(a, size, i + 1);
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	srand((unsigned)time(NULL));

	const int n = 20;
	int a[n];
	int Low;
	int High;

	cout << "Low = "; cin >> Low;
	cout << "High = "; cin >> High;

	Create(a, n, Low, High, 0);
	Print(a, n, 0);
	cout << "найбільший з парних елементів масиву = " << Find(a, n, 0);
	cout << endl;

	return 0;
}
