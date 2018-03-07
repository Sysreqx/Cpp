#include <string>
#include <iostream>
#include <ctime>
using namespace std;

int throwCube(int User_num, int PC_num)
{
	string User = "User: ";
	string PC = "PC: ";

	if (PC_num == 0)
	{
		cout << PC << "starting" << endl;
		//Счет
		int score_PC = 0;
		int tmp_score_PC = 0;
		int score_User = 0;
		int tmp_score_User = 0;
		//Кубики
		int cube1, cube2;
	
		for (int i = 0; i < 4; ++i)
		{
			// PC
			cube1 = 0;
			cube2 = 0;
			tmp_score_PC = 0;
	
			cube1 = 1 + rand() % 6;
			cube2 = 1 + rand() % 6;
			tmp_score_PC = cube1 + cube2;
			score_PC += tmp_score_PC;
	
			// User
			cube1 = 0;
			cube2 = 0;
			tmp_score_User = 0;
	
			cube1 = 1 + rand() % 6;
			cube2 = 1 + rand() % 6;
			tmp_score_User = cube1 + cube2;
			score_User += tmp_score_User;
			// Вывести временный счет
			cout << PC << tmp_score_PC << " " << User << tmp_score_User << endl;
			if (i == 3)
			{
				cout << PC << "total score: " << score_PC << endl;
				cout << User << "total score: " << score_User << endl;
				if (score_PC > score_User)
				{
					cout << PC << "Won" << endl;
					cout << User << "Lose" << endl;
				}
				else if (score_PC < score_User)
				{
					cout << User << "Won" << endl;
					cout << PC << "Lose" << endl;
				}
				else
					cout << "No One" << endl;
			}
		}
	}
	else
	{
		cout << User << "starting" << endl;
		//Счет
		int score_PC = 0;
		int tmp_score_PC = 0;
		int score_User = 0;
		int tmp_score_User = 0;
		//Кубики
		int cube1, cube2;
	
		for (int i = 0; i < 4; ++i)
		{
			// User
			cube1 = 0;
			cube2 = 0;
			tmp_score_User = 0;
	
			cube1 = 1 + rand() % 6;
			cube2 = 1 + rand() % 6;
			tmp_score_User = cube1 + cube2;
			score_User += tmp_score_User;

			// PC
			cube1 = 0;
			cube2 = 0;
			tmp_score_PC = 0;
	
			cube1 = 1 + rand() % 6;
			cube2 = 1 + rand() % 6;
			tmp_score_PC = cube1 + cube2;
			score_PC += tmp_score_PC;

			// Вывести временный счет
			cout << User << tmp_score_User << " " << PC << tmp_score_PC << endl;
			if (i == 3)
			{
				cout << User << "total score: " << score_User << endl;
				cout << PC << "total score: " << score_PC << endl;
				if (score_PC > score_User)
				{
					cout << PC << "Won" << endl;
					cout << User << "Lose" << endl;
				}
				else if (score_PC < score_User)
				{
					cout << User << "Won" << endl;
					cout << PC << "Lose" << endl;
				}
				else
					cout << "No One" << endl;
			}
		}
	}
	

	return 0;
}



int main()
{
	srand(time(0));
	int User_num = rand() % 2;
	int PC_num;
	int cube1, cube2;

	// Определить первого
	if (User_num == 1)
		PC_num = 0;
	else
		PC_num = 1;

	throwCube(User_num, PC_num);

		system("pause");
	return 0;
}
