#pragma once

#include <SFML/Graphics.hpp>
#include <iostream>
#include "DashedWall.h"
#include "SolidWall.h"
#include "Ball.h"
#include <math.h>

using std::cout;
using std::endl;

// Manages the game board and gameplay of the game
class AppWrapper
{
	
	public:
		AppWrapper(); // Constructor calls createGameBox()

		void runGame();

	private:
		DashedWall mDashedWall[2];
		SolidWall mSolidWall[2];
		Ball mBall;

		int mScore;
		int mNumPlayers;

		// Helper functions
		void createGameBox();
		void printGameBox(sf::RenderWindow &window);
};
