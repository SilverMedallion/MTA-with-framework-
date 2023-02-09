#include "Level.h"

Level::Level(sf::RenderWindow* hwnd, Input* in, GameState* gs, AudioManager* aud)
{
	window = hwnd;
	input = in;
	gameState = gs;
	audio = aud;

	// initialise game objects

}

Level::~Level()
{

}

// handle user input
void Level::handleInput(float dt)
{
	
}

// Update game objects
void Level::update(float dt)
{
	//comment put here for the purposes of the git bash tutorial by corey schafter 18:30
	int result = multiply(8, 5);
	std::cout << result << std::endl;
}

// Render level
void Level::render()
{
	beginDraw();

	endDraw();
}


int Level::multiply(int a, int b)
{
	int value = a * b;
	return value;
}