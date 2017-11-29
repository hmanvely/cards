#ifndef CARD_H
#define CARD_H

#include <string>

enum class SuitType{NONE, Heart, Diamond, Spade, Clover};
enum class RankType{ NONE, Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King, Ace, Joker};

class Card
{

public:
	Card(SuitType suit, RankType rank);

	bool  operator==(const Card& other) const;
	bool operator>(const Card& other) const;
	bool operator<(const Card& other) const;
	friend std::ostream& operator<< (std::ostream& stream, const Card& card);

private:
	SuitType suite;
	RankType rank;
};

#endif /* CARD_H */

