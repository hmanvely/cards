// Cards.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Card.h"
#include "Deck.h"

Card::Card(SuitType suit, RankType rank)
{
	this->suite = suit;
	this->rank = rank;
}

bool Card::operator==(const Card& other) const {
	return ((this->rank == other.rank) && (this->suite == other.suite));
}

bool Card::operator>(const Card& other) const {
	return (this->rank > other.rank);
	// ?
}

bool Card::operator<(const Card& other) const {
	return (this->rank < other.rank);
	// ?
}

std::ostream& operator<< (std::ostream& os, const Card& card) {
	os << (int)card.suite << (int)card.rank;
	return os;
}

int main()
{
	Card Card1 = Card(SuitType::Heart, RankType::Ace);
	Card Card2 = Card(SuitType::Clover, RankType(2));
	Card Card3 = Card(SuitType::Clover, RankType(2));

	bool same = Card2 == Card3;

	Deck deck = Deck();
	deck.shuffle();

    return 0;
}