#pragma once

#include "grid.h"
#include "block.h"
#include <array>


class Game
{
	std::array<Block, 7> blocks;


public:
	Grid grid;

	Game();
	Block GetRandomBlock();


};

