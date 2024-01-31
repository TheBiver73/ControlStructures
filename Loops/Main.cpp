//Loops
#include <iostream>
#include <conio.h>
using namespace std;
//#define WHILE_1
//#define WHILE_2

void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef WHILE_1
	int i = 0;// счетчик цикла
	int n;//количество итераций
	cout << "¬ведите количество итераций: "; cin >> n;
	while (i < n)
	{
		cout << "Hello World!";
		cout << "\t\tHello Earth";
		cout << ++i << endl;
		//i++;

	}
#endif // 
#ifdef WHILE2
	char key;
	do
	{
		key = _getch();
		cout << (int)key << "\t" << key << endl;

	} while (key != 27);
	cout << "\t\tStop programm!" << endl;
#endif//


}