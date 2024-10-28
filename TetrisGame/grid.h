#pragma once
#include <vector>
#include <array>
#include <raylib.h>


class Grid
{
	int numRows;
	int numCols;
	int cellSize;
	std::vector<Color> colors;

public:
	Grid();
	void Initialize();
	void Print();
	void Draw();

	/*int grid[20][10];*/
	std::array<std::array<int, 10>, 20> grid;

};