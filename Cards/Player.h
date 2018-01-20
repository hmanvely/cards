#ifndef PLAYER_H
#define PLAYER_H

#include <vector>
#include <string>

#include "Card.h"

class Player
{
	std::string name;
	std::vector<Card> cards;
	int team; // players with the same number are in the same team

	Player* nextPlayer;

public:
	Player(std::string name, int team);
	~Player();

	void addCard(Card card); // add to the player's card from the vector
	void playcard(Card card);

	void setNextPlayer(Player*);
	Player* getNextPlayer();

};

extern "C" __declspec(dllexport) Player* createPlayer(std::string, int);

#endif /* PLAYER_H */