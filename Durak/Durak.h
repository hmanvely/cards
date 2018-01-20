#ifndef DURAK_GAME_H
#define DURAK_GAME_H

#include <iostream>
#include <vector>

#include "../Cards/Game.h"
#include "../Cards/Deck.h"
#include "../Cards/Card.h"
#include "../Cards/Player.h"

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

#endif /* DURAK_GAME_H */