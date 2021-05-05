#pragma once
#include "Player.hpp"
using namespace std;
namespace pandemic{
    
    class Medic:public Player{
        public :
            Medic(Board board ,City city): Player(board, city){}
    };
}