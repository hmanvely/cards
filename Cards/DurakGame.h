#pragma once
#include "Game.h"
#include "Deck.h"
#include "Card.h"
#include "Player.h"

class DurakGame : public Game
{
	std::vector<Player*> players;
public:
	DurakGame(Player*, Player*);
	~DurakGame();

	void start();

	bool isLarger(const Card& card1, const Card& card2);
};

extern "C" __declspec(dllexport) DurakGame* createDurakGame(Player*, Player*);

