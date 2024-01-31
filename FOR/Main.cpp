//FOR
#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;
//#define FOR_BASICS
//#define FOR_DEBAG
//#define FACTORIAL
//#define DEGREE
//#define FIBONACHI
//#define SIMPLE_DIGITS
//#define MULTIPLICATION_TABLE





void main()
{
	setlocale(LC_ALL, "Russian");

#ifdef FOR_BASICS
	int n;
	cout << "Enter number of ops "; cin >> n;
	for (int=0;i<n;i++)
	{
		cout << "Hello"<<endl;
	}

#endif // That's for Bsics
#ifdef FACTORAL
	int n;
	cout << "¬ведите число дл€ вычислени€ факториала "; cin >> n;
	int f=1; // factorial

	for(int i=1;i<=n;i++) 
	{
		cout << i << "!=";
		f *= i;
		cout << f << endl;
	}
#endif //That's Factorial
#ifdef DEGREE
	double a; // основание степени
	int n; //показатель степени
	double N=1; //степень
	cout << "¬ведите основание степени "; cin >> a;
	cout << "¬ведите показатель степени "; cin >> n;
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	

	for (int i = 0; i < n; i++)
	{

		N *= a;
		cout << N << endl;
	}
#endif //That's Degree
#ifdef FIBONACHI

	int n;
	cout << "¬ведите предельное число "; cin >> n;
	for (int a = 0, b = 1, c = a + b; a < n; a = b, b = c, c = a + b)//c=(a=)+(b=c)
	{
		cout << a << "\t";
	}
	cout << endl;
#endif
#ifdef FOR_DEBUG


	int n = 5;
	for (
		int i = 0;
		i < n;
		i++)
	{
		cout << i << "\t";
	}
	
 	cout << endl;
	*/
#endif //That's for Debug
#ifdef SIMPLE_DIGITS
		int n;
	cout << "¬вудите предел: "; cin >> n;
	for (int i = 0; i <= n; i++)
	{
		bool simple = true;
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				simple = false;
				break;//ключевое слово 'break'прерывает текущую итерацию
			}
		}
			if(simple)cout << i << "\t";
	}
	cout << endl;
#endif//That's for Simple Digits
#ifdef MULTIPLICATION_TABLE
	int n = 10;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << i << " * " << j << " = " << i*j << endl;
		}
	}
#endif//for Multiplication table



}