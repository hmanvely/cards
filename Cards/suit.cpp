#include "Suit.h"

std::ostream& operator<< (std::ostream& os, const Suit& suit) {
	std::string s;
	if (suit == Suit::Clubs()) {
		s = "C";
	}
	else if (suit == Suit::Diamonds())
	{
		s = "D";
	}
	else if (suit == Suit::Hearts())
	{
		s = "H";
	}
	else if (suit == Suit::Spades())
	{
		s = "S";
	}
	os << s;
	return os;
}