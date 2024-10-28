#include "game.h"
#include "blocks.cpp"
#include <random>

Game::Game()
{
	grid = Grid();
	blocks = {IBlock(),
			  JBlock(),
			  LBlock(),
		      OBlock(),
			  SBlock(),
			  TBlock(),
			  ZBlock()};
}

Block Game::GetRandomBlock()
{
	if (blocks.empty())
	{

	}
	
	
	
	return Block();
}
