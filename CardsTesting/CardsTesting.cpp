// CardsTesting.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <Windows.h>
#include <vector>
#include <string>
#include <iostream>

#include "..\Cards\Player.h"
#include "..\Cards\Deck.h"

using namespace std;

/*
int main()
{
	
	HMODULE h = LoadLibraryW(L"Cards.dll");
	if (h) {

	}

	Deck deck = Deck();
	deck.shuffle();

	for (auto c : deck.getCards())
	{
		cout << c << endl;
	}
	

	return 0;
}
*/

int main()
{

	/*
	HMODULE h = LoadLibraryW(L"Cards.dll");
	if (h) {

		Player*(*createPlayer)(string, int);
		createPlayer = (Player*(*)(string, int))GetProcAddress(h, "createPlayer");

		Player* player1 = createPlayer("John", 0);
		Player* player2 = createPlayer("Bob", 1);

		DurakGame*(*createDurakGame)(Player*, Player*);
		createDurakGame = (DurakGame*(*)(Player*, Player*))GetProcAddress(h, "createDurakGame");
		DurakGame* game = createDurakGame(player1, player2);

		game->start();
	}*/
    return 0;
}
