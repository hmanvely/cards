#ifndef CARD_H
#define CARD_H

#include <string>

#include "Suit.h"
#include "Rank.h"

class Card
{
public:
	Card(Suit suit, Rank rank);

	bool operator==(const Card& other) const;
	bool operator!=(const Card& other) const { return !(*this == other); };
	virtual bool operator>(const Card& other) const { return (this->getRank() > other.getRank()); };
	bool operator<(const Card& other) const { return !((*this > other) && (*this == other)); };

	friend std::ostream& operator<<(std::ostream& stream, const Card& card);

	Suit getSuit() const { return suit; }
	Rank getRank() const { return rank; }

private:
	Suit suit;
	Rank rank;
};

#endif /* CARD_H */