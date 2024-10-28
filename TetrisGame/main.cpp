#include "raylib.h"
#include "grid.h"
#include "blocks.cpp"
#include <array>

using std::array;


int main()
{
	const unsigned int WIDTH = 300;
	const unsigned int HEIGHT = 600;
	const Color darkBlue = { 44, 44, 127, 255 };


	InitWindow(WIDTH, HEIGHT, "Tetris");
	SetTargetFPS(60);

	Grid grid = Grid();
	Block block = OBlock();
	block.Move(3, 4);
	Block block2 = IBlock();
	block2.Move(10, 1);
	Block block3 = TBlock();

	array<Block, 3> blocks = {block, block2, block3};


	// Block array[];

	while (WindowShouldClose() == false)
	{
		BeginDrawing();
		ClearBackground(darkBlue);
		grid.Draw();

		for (Block& block : blocks)
			{
				block.Draw();
			}
		//block.Draw();
		//block2.Draw();
		//block3.Draw();


		EndDrawing();
	}

	CloseWindow();
}