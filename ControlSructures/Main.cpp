#include <iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;
	se
#define CALC
void main()
{
		setlocale(LC_ALL, "Russian");
	double a, b;//числа, вводимые с клавиатуры
	char s;
	cout << "Ввудите выражение:";
	cin >> a >> s >> b;
	cout << a << s << b;

}
/*
{
	setlocale(LC_ALL, "Russian");
	cout << "Hello ControlStrustures!" << endl;
	int temperature;
	cout << "Введите температуру воздуха:"; cin >> temperature;
	cout << "Температура воздуха:" << temperature << "градуса(ов)\n";
	if (temperature>70)
	{
		cout << "Вы на другой планете" << endl;
	}
	else if (temperature >40)
	{ cout << "Вы в пустыне" << endl; }
}
*/