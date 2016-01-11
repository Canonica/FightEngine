// FightEngine.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <Windows.h>
#include "GameMode.h"

using namespace std;


int main()
{
	char start[5];
	char numberGameMode[1];
	cout << "Write start to start the game" << endl;
	cin >> start;
	if (strcmp("start", start) == 0) {
		cout << "Choose the Gamemode (write the number) " << endl;
		cout << "1 Quick Match" << endl;
		cout << "2 Tournament (coming soon)" << endl;
		cout << "3 Adventure (buy the season pass)" << endl;
		cin >> numberGameMode;
		if (strcmp("1", numberGameMode) == 0) {
			GameMode::StartGameMode();
		}
		else if (strcmp("2", numberGameMode) == 0) {
			cout << "Tournament" << endl;
		}
		else if(strcmp("3", numberGameMode) == 0){
			cout << "Adventure" << endl;
		}
	}
	else {
		cout << "Write start to start the game" << endl;
		cin >> start;
	}
	
	

}


