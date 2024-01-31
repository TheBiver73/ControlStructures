//Geometry
#include <iostream>
using std::cin;
using std::cout;
using std::endl;


//#define SQUARE
//#define TRIANGLE_1
//#define TRIANGLE_2
//#define TRIANGLE_3
//#define TRIANGLE_4
//#define ROMBUS_1
//#define ROMBUS_2
//#define CHESS_MATE
void main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Введите количество звездочек: "; cin >> n;

#ifdef SQUARE
	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < n; i++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif//That's for SQUARE
#ifdef TRIANGLE_1
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif//That's for Triangle 1
#ifdef TRIANGLE_2
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	
	}
#endif//That's for Triangle 2
#ifdef TRIANGLE_3
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)cout << "  ";
		for (int j = i; j < n; j++)cout << "* ";
		cout << endl;
	
	}



#endif//That's for Triangle 3
#ifdef TRIANGLE_4
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n-1; j++)cout << "  ";
		for (int j = 0; j <=i; j++)cout << "* ";
		cout << endl;

	}
#endif//That's for Triangle 4
#ifdef ROMBUS
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)cout << " "; cout << "/";
		for (int j = 0; j < i; j++)cout << "  "; cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <=i; j++)cout << " "; cout << "\\";
		for (int j = i; j < n-1; j++)cout << "  "; cout << "/";
		cout << endl;
		
	}
#endif//That's for Rombus 1
#ifdef ROMBUS_2	
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)cout << " "; cout << "/";
		for (int j = 0; j < i*2; j++)cout << " "; cout << "\\  ";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)cout << " "; cout << "\\";
		for (int j = 0; j < (n-1-i)*2; j++)cout << " "; cout << "/";
		cout << endl;

	}
#endif//That's for Rombus 2
#ifdef CHESS_MATE

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			//if ((i+j) % 2 == 0)cout << "+ ";else cout << "- ";
			//if (i%2==j%2)cout<<"+ ";else cout<<"- ";
			//(i%2==j%2) ? cout<<"+ ": cout<<"- ";
			cout << (i % 2 == j % 2 ? "+ " : "- ");
		}
		cout << endl;
	}

#endif// That's for CHESS_MATE and CONDITIONAL_TERNARY_OPERATOR





	}




