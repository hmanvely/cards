// Cards.cpp : Defines the entry point for the console application.
//

#include "Card.h"
#include "Deck.h"

using namespace::std;

Card::Card(SuitType _suit, RankType _rank) : suit(_suit), rank(_rank)
{

}

bool Card::operator==(const Card& other) const {
	return ((this->rank == other.rank) && (this->suit == other.suit));
}


ostream& operator<< (ostream& os, const Card& card) {
	os << SuitToString(card.suit) << RankToString(card.rank);
	return os;
}

std::string SuitToString(const SuitType suit) {
	switch (suit)
	{
	case SuitType::None:
		return "";
		break;
	case SuitType::Hearts:
		return "♥";
		break;
	case SuitType::Diamonds:
		return "♦";
		break;
	case SuitType::Spades:
		return "♠";
		break;
	case SuitType::Clubs:
		return "♣";
		break;
	}
}
std::string RankToString(const RankType rank) {
	switch (rank)
	{
	case RankType::Ace:
		return "A";
		break;
	case RankType::Two:
		return "2";
		break;
	case RankType::Three:
		return "3";
		break;
	case RankType::Four:
		return "4";
		break;
	case RankType::Five:
		return "5";
		break;
	case RankType::Six:
		return "6";
		break;
	case RankType::Seven:
		return "7";
		break;
	case RankType::Eight:
		return "8";
		break;
	case RankType::Nine:
		return "9";
		break;
	case RankType::Ten:
		return "10";
		break;
	case RankType::Jack:
		return "J";
		break;
	case RankType::Queen:
		return "Q";
		break;
	case RankType::King:
		return "K";
		break;
	case RankType::Joker:
		return "Joker";
		break;
	}
}

