//Ticket
#include <iostream>
using namespace std;
void main ()
{
	setlocale(LC_ALL, "Russian");
	int number;
	int sum1, sum2;
	sum1 = sum2 = 0;
	cout << "Enter your ticket number  "; cin >> number;
	while (number > 1000)
	{
		sum1 += number % 10;
		number /= 10;
	}
	while (number > 0)
	{
		sum2 += number % 10;
		number /= 10;
	}
	if (sum1 = sum2)
	{
		cout << "We are happy" << endl;
	}
	else cout << "May hap next time" << endl;
}