#pragma once

#include <SFML/Graphics.hpp>
#include "Framework/Input.h"
#include "Framework/GameObject.h"
#include "Player.h"
#include "Enemy.h"
#include <string.h>
#include <iostream>
#include <SFML/System/Vector2.hpp>
#include "Cursor.h"
#include "Background.h"




class Level{
public:
	Level(sf::RenderWindow* hwnd, Input* in);
	~Level();

	void handleInput(float dt);
	void update(float dt);
	void render();

private:
	// Default functions for rendering to the screen.
	void beginDraw();
	void endDraw();

	// Default variables for level class.
	sf::RenderWindow* window;
	Input* input;

	// Level objects
	//GameObject testSprite;
	sf::Texture texture;
	//sf::Texture enemyTexture;
	sf::Texture enemyTexture;
	sf::Texture cursorTexture;
	sf::Texture backgroundTexture;
	Player player;
	Enemy enemy;
	Enemy enemy2;
	Cursor cursor;
	Background background;
	//sf::Vector2<float>	size;
	//float enemy.setSize().x;
	//sf::Vector2<float>  enemy.setSize().y;
	/*sf::Vector2<float>	speed;*/
};