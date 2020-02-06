#include "Level.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	// initialise game objects
	texture.loadFromFile("gfx/Mushroom.png");

	player.setTexture(&texture);
	player.setSize(sf::Vector2f(100, 100));
	player.setPosition(100, 100);
	player.setInput(input);

	enemyTexture.loadFromFile("gfx/goomba.png");

	enemy.setTexture(&enemyTexture);
	enemy.setSize(sf::Vector2f(100, 100));
	enemy.setPosition(300, 100);
	enemy.setWindow(window);
	
	enemy.setSize().x;
	enemy.setSize().y;

	enemy.setSize(100).x;


	
	/*speed.x = 150.0f;
	speed.y = 150.0f;*/

}

Level::~Level()
{

}

// handle user input
void Level::handleInput(float dt)
{
	// Close window on Escape pressed.
	if (input->isKeyDown(sf::Keyboard::Escape))
	{
		window->close();
	}
	player.handleInput(dt);
	//enemy.handleInput(dt);

}

// Update game objects
void Level::update(float dt)
{
	player.update(dt);
	//enemy.update(dt);
	
}

// Render level
void Level::render()
{
	beginDraw();

	window->draw(player);
	window->draw(enemy);

	endDraw();
}

// clear back buffer
void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}