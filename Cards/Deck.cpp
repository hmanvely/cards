#include "Deck.h"

using namespace::std;

Deck::Deck()
{
	cards = vector<Card>();
	
	for (int suite = (int)SuitType::Hearts; suite <= (int)SuitType::Clubs; suite++) {
		for (int rank = (int)RankType::Two; rank <= (int)RankType::Ace; rank++)
		{
			Card card = Card(SuitType(suite), RankType(rank));
			cards.push_back(card);
		}
	}
	// for (Rank r = Rank(2); r <= Rank::Ace; r++);

}

Deck::Deck(DeckType deckType) {
	switch (deckType)
	{
	case DECK_32:
		break;
	case DECK_36:
		break;
	case DECK_52:
		break;
	default:
		break;
	}
}

Deck::Deck(vector<Card> cards)
{
	this->cards = cards;
}

/*
void Deck::addCard(Card card) {
	cards.push_back(card);
}*/

Card Deck::getCard(){
	return cards.front();
}

void Deck::shuffle() {
	std::random_device r;
	std::shuffle(cards.begin(), cards.end(), std::mt19937(r()));
}

Deck::~Deck()
{
}
