#include "Level.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	window->setMouseCursorVisible(false);

	// initialise game objects
	texture.loadFromFile("gfx/cupcake2.png");

	player.setTexture(&texture);
	player.setSize(sf::Vector2f(100, 100));
	player.setPosition(100, 100);
	player.setInput(input);

	enemyTexture.loadFromFile("gfx/goomba.png");

	enemy.setTexture(&enemyTexture);
	enemy.setSize(sf::Vector2f(100, 100));
	enemy.setPosition(300, 100);
	enemy.setWindow(window);
	


	texture.loadFromFile("gfx/cupcake2.png");

	enemy2.setTexture(&texture);
	enemy2.setSize(sf::Vector2f(100, 100));
	enemy2.setPosition(500, 100);
	enemy2.setWindow(window);

	cursorTexture.loadFromFile("gfx/Icon.png");

	cursor.setTexture(&cursorTexture);
	cursor.setSize(sf::Vector2f(48, 48));
	//cursor.setPosition(100, 100);
	cursor.setInput(input);

	backgroundTexture.loadFromFile("gfx/Level1_1.png");

	background.setTexture(&backgroundTexture);
	background.setSize(sf::Vector2f(11038, 675));
	background.setPosition(0, 0);
	background.setWindow(window);



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
	
	background.handleInput(dt);
}

// Update game objects
void Level::update(float dt)
{
	player.update(dt);
	
	enemy.update(dt);

	enemy2.update(dt);

	cursor.update(dt, input->getMouseX(), input->getMouseY());

	background.update(dt);
}

// Render level
void Level::render()
{
	beginDraw();

	window->draw(background);
	window->draw(player);
	window->draw(enemy);
	window->draw(enemy2);
	window->draw(cursor);

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