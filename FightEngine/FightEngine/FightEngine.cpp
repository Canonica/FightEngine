// FightEngine.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Game.h"
#include "QuickMatch.h"
#include "Tournament.h"
#include "Adventure.h"

using namespace std;


int main()
{
	char start[6];
	char numberGameMode[2];
	cout << "Write start to start the game" << endl;
	//cin >> start;
	//if (strcmp("start", start) == 0) {
		cout << "Choose the Gamemode (write the number) " << endl;
		cout << "1 Quick Match" << endl;
		cout << "2 Tournament (coming soon)" << endl;
		cout << "3 Adventure (buy the season pass)" << endl;
		cout << "4 Rules" << endl;
		cin >> numberGameMode;
		if (strcmp("1", numberGameMode) == 0) {
			//cout << "QuickMatch" << endl;
			Game::StartGame(GameMode::QUICK);
		}
		else if (strcmp("2", numberGameMode) == 0) {
			cout << "Tournament" << endl;
		}
		else if(strcmp("3", numberGameMode) == 0){
			cout << "Adventure" << endl;
		}
		else if (strcmp("4", numberGameMode) == 0) {
			cout << "------Rules------" << endl;
			cout << "Fight engine is a turn by turn versus fighting game. You have 2 actions each turn." << endl;
			cout << "---Keys---" << endl;
			cout << "PUNCH-> a" << endl;
			cout << "KICK-> e" << endl;
			cout << "FORWARD-> d" << endl;
			cout << "BACKWARD-> q" << endl;
			cout << "JUMP-> z" << endl;
			cout << "BLOCK-> f" << endl;
			cout << "CROUCH-> s" << endl;
			cout << "-------------" << endl;
			cout << "---Combos---" << endl;
			cout << "You can do Combos by enchaining 2 actions" << endl;
			cout << "HIGHPUNCH->JUMP + PUNCH" << endl;
			cout << "LOWPUNCH->CROUCH + PUNCH" << endl;
			cout << "HIGHKICK->JUMP + KICK" << endl;
			cout << "LOWKICK->CROUCH + KICK" << endl;
			cout << "BACKFLIPKICK->BACKWARD + KICK" << endl;
			cout << "UPPERCUT->BACKWARD + PUNCH" << endl;
			cout << "NUTDESTROYER->FORWARD + PUNCH" << endl;
			cout << "-----------" << endl;
			cout << "-----------" << endl;
			cout << "-----------" << endl;
			main();

		}
	//}
	

}


