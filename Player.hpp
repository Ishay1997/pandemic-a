#pragma once
#include "Color.hpp"
#include "Board.hpp"

namespace pandemic
{
    class Player
    {
    public:
        Player(Board &, City);
        Player(Board &, City, int);
        Player drive(const City &c);
        Player fly_direct(const City &c);
        Player fly_charter(const City &c);
        Player fly_shuttle(const City &c);
        Player build();
        Player discover_cure(const Color &c);
        Player treat(const City &c);
        static std::string role(){return "lll";}
        Player take_card(const City &c);
    };
} 
