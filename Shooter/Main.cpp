#include <iostream>
#include<conio.h>
using namespace std;
#define UP_ARROW      72//Up  
#define DOWN_ARROW    80//Down
#define LEFT_ARROW    75//Left
#define RIGHT_ARROW   77//Right
#define Enter         13//Enter
#define Escape        27//Escape
void main() 
{
	setlocale(LC_ALL, "Russian");
	char key;
	do 
	{
		key = _getch();
		//cout << int(key) << "\t\t" << key << endl;
		switch (key)
		{
		case'W':case'w':case UP_ARROW:cout << "Forward" << endl; break;
		case'S':case's':case DOWN_ARROW:cout << "Back" << endl; break;
		case'A':case'a':case LEFT_ARROW:cout << "Left" << endl; break;
		case'D'://можно писать в строчку, можно каждое значение на отдельной строке, завист от стиля написания
		case'd':
		case RIGHT_ARROW:cout << "Right" << endl; break;
		case Escape:cout << "Escape" << endl;
		case-32:break;
		default:cout<<"Error!" << endl;
		}
		/*if (key == 'w' || key == 'W' || key == UP_ARROW)cout << "Froward!" << endl;
		else if (key == 's'||key=='S' || key==DOWN_ARROW)cout << "Back!" << endl;
		else if (key == 'a'||key=='A' || key==LEFT_ARROW)cout << "Left!" << endl;
		else if (key == 'd'||key=='D' || key==RIGHT_ARROW)cout << "Right!" << endl;
		else if (key == ' ')cout << "Jump!" << endl;
		else if (key == 13)cout << "Fire!" << endl;
		else if (key!=27&&key!=-32)cout << "Error!" << endl;*/
	} while (key != 27);
}