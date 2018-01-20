// Cards.cpp : Defines the entry point for the console application.
//

#include "Card.h"
#include "Deck.h"

using namespace::std;

Card::Card(Suit _suit, Rank _rank) : suit(_suit), rank(_rank)
{

}

bool Card::operator==(const Card& other) const {
	return ((this->rank == other.rank) && (this->suit == other.suit));
}


ostream& operator<< (ostream& os, const Card& card) {
	os << card.suit << card.rank;
	return os;
}





