// Lab_04_6.cpp
// <���⳿� ���������>
// ����������� ������ � 4.6
// �������� �����
// ������ 8

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double P, S;
	int k, n;

	// ����� 1

	P = 1;
	k = 1;
	while (k <= 10)
	{
		S = 0;
		n = 1;
		while (n <= k)
		{
			S += (sin(k) * sin(n));
			n++;
		}
		P *= S / k;
		k++;
	}
	cout << P << endl;

	// ����� 2

	P = 1;
	k = 1;
	do {
		S = 0;
		n = 1;
		do {
			S += (sin(k) * sin(n));
			n++;
		} while (n <= k);
		P *= S / k;
		k++;
	} while (k <= 10);
	cout << P << endl;

	// ����� 3

	P = 1;
	for (k = 1; k <= 10; k++)
	{
		S = 0;
		for (n = 1; n <= k; n++)
		{
			S += (sin(k) * sin(n));
		}
		P *= S / k;
	}
	cout << P << endl;

	// ����� 4

	P = 1;
	for (k = 10; k >= 1; k--)
	{
		S = 0;
		for (n = k; n >= 1; n--)
		{
			S += (sin(k) * sin(n));
		}
		P *= S / k;
	}
	cout << P << endl;

	return 0;
}