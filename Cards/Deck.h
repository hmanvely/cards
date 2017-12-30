#ifndef DECK_H
#define DECK_H

#include <algorithm>
#include <random>
#include <vector>

#include "Card.h"

enum DeckType {DECK_32, DECK_36, DECK_52};

class Deck
{
public:
	Deck();
	Deck(DeckType deckType);
	Deck(std::vector<Card> cards);
	~Deck();

	Card getCard();

	void shuffle();

private:
	std::vector<Card> cards;
};

#endif /* DECK_H */
