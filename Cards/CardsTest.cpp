#include "Card.h"
#include "Deck.h"

using namespace::std;

int main()
{
	Card Card1 = Card(SuitType::Hearts, RankType::Ace);
	Card Card2 = Card(SuitType::Clubs, RankType(2));
	Card Card3 = Card(SuitType::Clubs, RankType(2));

	bool same = Card2 == Card3;

	Deck deck = Deck();
	deck.shuffle();

	return 0;
}