#include "Rank.h"

using namespace std;

Rank Rank::Ace() {
	return Rank(RankType::Ace);
}

Rank Rank::Two() { 
	return Rank(RankType::Two); 
}
Rank Rank::Three() { 
	return Rank(RankType::Three); 
}
Rank Rank::Four() { 
	return Rank(RankType::Four);
}
Rank Rank::Five() {
	return Rank(RankType::Five);
}
Rank Rank::Six() { 
	return Rank(RankType::Six); 
}
Rank Rank::Seven() { 
	return Rank(RankType::Seven); 
}
Rank Rank::Eight() { 
	return Rank(RankType::Eight); 
}
Rank Rank::Nine() { 
	return Rank(RankType::Nine);
}
Rank Rank::Ten() { 
	return Rank(RankType::Ten); }
Rank Rank::Jack() { 
	return Rank(RankType::Jack);
}
Rank Rank::Queen() { 
	return Rank(RankType::Queen); 
}
Rank Rank::King() { 
	return Rank(RankType::King); 
}
Rank Rank::Joker() { 
	return Rank(RankType::Joker);
}

bool Rank::operator==(const Rank& other) const {
	return this->rank == other.rank;
}

bool Rank::operator!=(const Rank& other) const {
	return !(*this == other);
}

bool Rank::operator<(const Rank& other) const {
	return (this->rank < other.rank);
}

bool Rank::operator>(const Rank& other) const {
	return !(*this < other) && (*this != other);
}

bool Rank::operator<=(const Rank& other) const {
	return !(*this > other);
}

bool Rank::operator>=(const Rank& other) const {
	return !(*this < other);
}

std::ostream& operator<< (std::ostream& os, const Rank& rank) {
	char ch;
	if (rank == Rank::Ace())
	{
		ch = 'A';
	}
	else if (rank == Rank::Two())
	{
		ch = '2';
	}
	else if (rank == Rank::Three())
	{
		ch = '3';
	}
	else if (rank == Rank::Four())
	{
		ch = '4';
	}
	else if (rank == Rank::Five())
	{
		ch = '5';
	}
	else if (rank == Rank::Six())
	{
		ch = '6';
	}
	else if (rank == Rank::Seven())
	{
		ch = '7';
	}
	else if (rank == Rank::Eight())
	{
		ch = '8';
	}
	else if (rank == Rank::Nine())
	{
		ch = '9';
	}
	else if (rank == Rank::Ten())
	{
		ch = '1';
	}
	else if (rank == Rank::Jack())
	{
		ch = 'J';
	}
	else if (rank == Rank::Queen())
	{
		ch = 'Q';
	}
	else if (rank == Rank::King())
	{
		ch = 'K';
	}
	else if (rank == Rank::Joker())
	{
		ch = 'R';
	}
	os << ch;

	return os;
}

std::istream& operator >> (std::istream& is, Rank& rank) {
	char ch;
	bool done = false;
	while (is.get(ch) && !done) {
		switch (toupper(ch)) {
		case 'A':
			rank = Rank::Ace();
			done = true;
			break;
		case '2':
			rank = Rank::Two();
			done = true;
			break;
		case '3':
			rank = Rank::Three();
			done = true;
			break;
		case '4':
			rank = Rank::Four();
			done = true;
			break;
		case '5':
			rank = Rank::Five();
			done = true;
			break;
		case '6':
			rank = Rank::Six();
			done = true;
			break;
		case '7':
			rank = Rank::Seven();
			done = true;
			break;
		case '8':
			rank = Rank::Eight();
			done = true;
			break;
		case '9':
			rank = Rank::Nine();
			done = true;
			break;
		case '1':
			rank = Rank::Ten();
			done = true;
			break;
		case 'J':
			rank = Rank::Jack();
			done = true;
			break;
		case 'Q':
			rank = Rank::Queen();
			done = true;
			break;
		case 'K':
			rank = Rank::King();
			done = true;
			break;
		case 'R':
			rank = Rank::Joker();
			done = true;
			break;
		}
	}
	return is;
}
