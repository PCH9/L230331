#include <iostream> 
#include <conio.h>
// # = 전처리 / include = 포함하다 / < >= 표준 / iostream = 라이브러리(각각 다름)

using namespace std;

int main()
{
	int Map[10][10]
	{
		{1,1,1,1,1,1,1,1,1,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,1,1,1,1,1,1,1,1,1}
	};

	int PlayerX = 1;
	int PlayerY = 1;
	bool blsRunning = true;

	while (blsRunning) // GameLoop
	{
		// Frame
		// Input();
		char Key;
		Key = _getch();
		//cin >> Key;
		
		// Tick();
		if (Key == 'd')
		{
			PlayerX++;
		}
		else if (Key == 'a')
		{
			PlayerX--;
		}
		else if (Key == 'w')
		{
			PlayerY--;
		}
		else if (Key == 's')
		{
			PlayerY++;
		}
		else if (Key == 'q')
		{
			blsRunning = false;
		}
		
		// Rander();
		system("cls");
		
		for (int Y = 0; Y < 10; Y++)
		{
			for (int X = 0; X < 10; X++)
			{
				if (PlayerX == X && PlayerY == Y)
				{
					cout << "P";
				}
				else if (Map[Y][X] == 1)
				{
					cout << "#";
				}
				else if (Map[Y][X] == 0)
				{
					cout << ' ';
				}
			
			}
			cout << '\n';
		}
		

	}
	return 0;
}