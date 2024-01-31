#include<iostream>
#include<conio.h>
using namespace std;
//#define FACTORIAL
//#define POWER
//#define ASCII

void main()
{
	setlocale(LC_ALL, "Russian");
	/*
#ifdef FACTORIAL
	int n;
	int i = 1;
	double f = 1;
	cout << "Enter the digit for factorial: "; cin >> n;
	while(i<=n) 
	{
		cout << i << "!=";
		f *= i++;
		cout << f << "\n";
	}
#endif
*/

/*#ifdef POWER
	double a; // основание степени
	int n; // показатель степени
	double N = 1; // степень
	cout << "Введите основание степени "; cin >> a;
	cout << "Введите показатель степени "; cin >> n;
	if (n < 0) 
	{
		a = 1 / a;
		n = -n;

	}
	int i = 0;
	while (i++ < n)N *= a;
	cout << N << endl;
#endif
*/

/*
#ifdef ASCII
	cout << "Таблица ASCII-символов:\n";
	int i = 0;
	int n = 256;
	while (i < n) 
	{
		if (i % 16 == 0)cout << endl;
		cout << (char)i++ << " ";
	}
	cout << endl;
	setlocale(LC_ALL, "Russian");
	cout << "Вот и сказочке конец! " << endl;
#endif
*/

}
