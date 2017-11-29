#ifndef DECK_H
#define DECK_H

#include <algorithm>
#include <random>
#include <vector>

#include "Card.h"


class Deck
{

public:
	Deck();
	Deck(std::vector<Card> cards);
	~Deck();

	Card getCard();

	void shuffle();
private:
	std::vector<Card> cards;
};

#endif /* DECK_H */
