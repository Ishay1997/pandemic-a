#include "Player.hpp"

using namespace std;
namespace pandemic
{
	Player::Player(Board &board, City city) {}
	Player::Player(Board &board, City city, int x) {}
	Player Player::drive(const City &c) { return *this; }
	Player Player::fly_direct(const City &c) { return *this; }
	Player Player::fly_charter(const City &c) { return *this; }
	Player Player::fly_shuttle(const City &c) { return *this; }
	Player Player::build() { return *this; }
	Player Player::discover_cure(const Color &c) { return *this; }
	Player Player::treat(const City &c) { return *this; }
	Player Player::take_card(const City &c) { return *this; }

} 
