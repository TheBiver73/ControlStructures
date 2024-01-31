#include <iostream>
using namespace std;
void main()
{
	int a = 7;
	int b = 8;
	cout << a << "\t" << b << endl;
	cout << a << "\t" << b << endl;
	b ^= a ^= b^= a;
		cout << a << "\t" << b << endl;
		cout << a << "\t" << b << endl;
}