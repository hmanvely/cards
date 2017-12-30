#pragma once
#include <vector>
#include "Player.h"


class Game
{
public:
	Game();
	virtual void start() = 0;
	~Game();

private:
	bool gameOver;
	std::vector<Player> players;

	void turn();
};

