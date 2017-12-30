#ifndef CARD_H
#define CARD_H

#include <string>

enum class SuitType {None, Clubs,  Diamonds, Hearts, Spades};
enum class RankType {Ace, Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King,  Joker};

std::string RankToString(const RankType);
std::string SuitToString(const SuitType);

class Card
{
public:
	Card(SuitType suit, RankType rank);

	bool operator==(const Card& other) const;
	friend std::ostream& operator<<(std::ostream& stream, const Card& card);

	SuitType Suit() const { return suit; }
	RankType Rank() const { return rank; }

private:
	SuitType suit;
	RankType rank;
};

#endif /* CARD_H */

