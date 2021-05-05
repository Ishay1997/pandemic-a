#include "Board.hpp"

  namespace pandemic{
	  Board::Board(){};
	 int& Board::operator[](const City city){return this->level_disease[city];}
	 std::ostream& operator<<(std::ostream& out, const Board& board){return out;}
	 void Board::remove_cures(){}
  }






