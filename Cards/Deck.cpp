#include "Deck.h"

using namespace::std;

Deck::Deck()
{
	cards = vector<Card>();
	vector<Suit> suits{ Suit::Clubs(), Suit::Diamonds(), Suit::Hearts(), Suit::Spades() };
	vector<Rank> ranks{ Rank::Six(), Rank::Seven(), Rank::Eight(), Rank::Nine(), Rank::Ten(), Rank::Jack(), Rank::Queen(), Rank::King(), Rank::Ace() };
	
	for (auto s : suits)
	{
		for (auto r : ranks)
		{
			cards.push_back(Card(s,r));
		}

	}
	/*
	for (int suite = (int)SuitType::Hearts; suite <= (int)SuitType::Clubs; suite++) {
		for (int rank = (int)RankType::Two; rank <= (int)RankType::Ace; rank++)
		{
			Card card(Suit::Clubs(), RankType(rank));
			cards.push_back(card);
		}
	}*/
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

std::ostream& operator<< (std::ostream& os, const Deck& deck) {

	for (auto card : deck.cards) {
		os << card << endl;
	}
	return os;
}

Deck::~Deck()
{
}
