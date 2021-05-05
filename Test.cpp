#include "Board.hpp"
#include "OperationsExpert.hpp"
#include "Dispatcher.hpp"
#include "Researcher.hpp"
#include "doctest.h"


using namespace pandemic;

TEST_CASE("OperationsExpert"){
    Board board;
	board[City::Moscow]=12;	
	OperationsExpert operationsExpert(board,City::Moscow);
	operationsExpert.build();
	operationsExpert.discover_cure(Black);
	CHECK_EQ(board.is_clean(),true);

	OperationsExpert researcher2(board,City::Miami);
	board[City::Miami]=1;	
	researcher2.take_card(City::Miami);
	researcher2.discover_cure(Color::Yellow);
	CHECK_EQ(board.is_clean(),true);
}

TEST_CASE("Dispatcher"){
    Board board;
	board[City::NewYork]=1;	
	Dispatcher dispatcher(board,City::Moscow);
	dispatcher.fly_direct(City::NewYork);
	dispatcher.treat(City::NewYork);
	CHECK_EQ(board.is_clean(),true);

	OperationsExpert researcher2(board,City::Miami);
	board[City::Miami]=1;	
	researcher2.take_card(City::Miami);
	researcher2.discover_cure(Color::Yellow);
	CHECK_EQ(board.is_clean(),true);
}


TEST_CASE("Researcher"){
     Board board;	
	Researcher researcher(board,City::Milan);
	researcher.take_card(City::Milan);
	researcher.discover_cure(Color::Blue);
	CHECK_EQ(board.is_clean(),true);

	Researcher researcher2(board,City::Miami);
	researcher2.take_card(City::Miami);
	researcher2.discover_cure(Color::Yellow);
	CHECK_EQ(board.is_clean(),true);
}

TEST_CASE("level of disease"){
    Board board;
	board[City::Tokyo]=1;
    CHECK(board[City::Tokyo]==1);
	board[City::HongKong]=2;
    CHECK(board[City::HongKong]==2);
	board[City::Baghdad]=3;
    CHECK(board[City::Baghdad]==3);
	board[City::Cairo]=4;
    CHECK(board[City::Cairo]==4);
	board[City::Miami]=1;
    CHECK_NE(board[City::Miami],2);
	board[City::Mumbai]=2;
    CHECK_NE(board[City::Mumbai],3);
	board[City::Tehran]=3;
    CHECK_NE(board[City::Tehran],4);
	board[City::Bogota]=4;
    CHECK_NE(board[City::Bogota],5);
	board[City::NewYork]=1;
    CHECK(board[City::NewYork]==1);
	board[City::Osaka]=2;
    CHECK(board[City::Osaka]==2);
	board[City::Paris]=3;
    CHECK(board[City::Paris]==3);
	board[City::Riyadh]=4;
    CHECK(board[City::Riyadh]==4);
	board[City::SanFrancisco]=1;
    CHECK_NE(board[City::SanFrancisco],2);
	board[City::Seoul]=2;
    CHECK_NE(board[City::Seoul],3);
	board[City::Tokyo]=3;
    CHECK_NE(board[City::Tokyo],4);
	board[City::Taipei]=4;
    CHECK_NE(board[City::Taipei],5);
}





