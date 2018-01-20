#ifndef RANK_H
#define RANK_H

#include <string>

enum class RankType {
	Ace, Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King, Joker
};

class Rank {
public:
	// static methods to create ranks
	static Rank Ace();
	static Rank Two();
	static Rank Three();
	static Rank Four();
	static Rank Five();
	static Rank Six();
	static Rank Seven();
	static Rank Eight();
	static Rank Nine();
	static Rank Ten();
	static Rank Jack();
	static Rank Queen();
	static Rank King();
	static Rank Joker();

	// relational operators
	bool operator==(const Rank& other) const;
	bool operator!=(const Rank& other) const;
	bool operator<(const Rank& other) const;
	bool operator>(const Rank& other) const;
	bool operator<=(const Rank& other) const;
	bool operator>=(const Rank& other) const;
	
private:
	RankType rank;

	// constructor is private to prevent objext creation, use above static methods to create ranks
	Rank(RankType r) : rank(r) {};
};

// input, output operators
std::ostream& operator<< (std::ostream& os, const Rank& rank);
std::istream& operator>> (std::istream& is, Rank& rank);

#endif /* RANK_H */