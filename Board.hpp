#pragma once
#include "City.hpp"
#include <iostream>
#include <unordered_map>

namespace pandemic {
	
	class Board
	{
	public:
        Board();
		std::unordered_map<City, int> level_disease;
		int& operator[]( const City city);
		static bool is_clean(){return true;}
		void remove_cures();
		friend std::ostream& operator<<(std::ostream& out, const Board& );
	};	
}

