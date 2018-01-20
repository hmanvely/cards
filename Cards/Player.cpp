#include "Player.h"

#include <vector>
#include "Card.h"

using namespace std;

Player::Player(string _name, int _team = 0)
{
	name = name;
	team = team;
}


Player::~Player()
{
}

void Player::addCard(Card card) {
}

	// add to the player's card from the vector
void Player::playcard(Card card) {

}

void Player::setNextPlayer(Player* player) {
	nextPlayer = player;
}
Player* Player::getNextPlayer() {
	return nextPlayer;
}

extern "C" __declspec(dllexport) Player* createPlayer(std::string name, int team) {
	return new Player(name, team);
}