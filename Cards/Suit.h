#ifndef SUIT_H
#define SUIT_H

#include <string>

enum class SuitType { None, Clubs, Diamonds, Hearts, Spades };

class Suit {
public:
	static Suit Clubs() { return Suit(SuitType::Clubs); }
	static Suit Diamonds() { return Suit(SuitType::Diamonds); }
	static Suit Hearts() { return Suit(SuitType::Hearts); }
	static Suit Spades() { return Suit(SuitType::Spades); }

	bool operator==(const Suit& other) const { return this->suit == other.suit; }

	SuitType getSuit() const { return suit; }
	friend std::ostream& operator<< (std::ostream& os, const Suit& suit);

private:
	SuitType suit;
	explicit Suit(SuitType s) { suit = s; }
};

#endif /* SUIT_H */