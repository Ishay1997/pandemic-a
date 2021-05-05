#include "Board.hpp"

  namespace pandemic{
	  Board::Board(){};
	 int& Board::operator[](const City city){return this->level_disease[city];}
	 std::ostream& operator<<(std::ostream& out, const Board& board){return out;}
	 // bool Board::is_clean(){return true;}
	 void Board::remove_cures(){}
  }






