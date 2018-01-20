#include "Durak.h"

using namespace std;

DurakGame::DurakGame(Player* player1, Player* player2)
{
	players.push_back(player1);
	players.push_back(player2);

	players[0]->setNextPlayer(players[1]);
	players[1]->setNextPlayer(players[0]);

}


DurakGame::~DurakGame()
{
}

bool DurakGame::isLarger(const Card& card1, const Card& card2) {
	if (card1.getRank() > card2.getRank()) {
		return true;
	}
	else
	{
		return false;
	}
}

void DurakGame::start() {
	Deck deck = Deck();
	cout << deck;
}

extern "C" __declspec(dllexport) DurakGame* createDurakGame(Player* player1, Player* player2) {
	return new DurakGame(player1, player2);
}