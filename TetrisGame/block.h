#pragma once
#include <vector>
#include <map>
#include "position.h"
#include "colors.h"


class Block
{
	int cellSize;
	int rotationState;
	std::vector<Color> colors;
	int rowOffset;
	int columnOffset;

public:
	Block();
	void Draw();
	void Move(int rows, int columns);
	std::vector<Position> GetCellPositions();
	int id;
	std::map<int, std::vector<Position>> cells;
};