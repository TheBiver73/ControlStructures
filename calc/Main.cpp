#include <iostream>
using namespace std;
void main () 
{
	setlocale(LC_ALL, "Russian");
	double a, b; // числа, инициализируемы с клавиатуры
	char s;      // s = Sign (знак операции)
	cout << "Введите выражение: "; cin >> a >> s >> b;
	switch (s)
	{
	case'+':cout << a << " " << s << " " << b << " = " << a + b << endl; break;
	case'-':cout << a << " " << s << " " << b << " = " << a - b << endl; break;
	case'*':cout << a << " " << s << " " << b << " = " << a * b << endl; break;
	case'/':cout << a << " " << s << " " << b << " = " << a / b << endl; break;
	default: cout << "Error:No Ops" << endl;
	}
	
}