#pragma once
#include "Framework/GameObject.h"

class Enemy : public GameObject
{
public:
	Enemy();
	~Enemy();

	void handleInput(float dt);
	void update(float dt);
	void setWindow(sf::RenderWindow *hwnd) { window = hwnd; };

private:
	sf::Vector2<float>	speed;
	sf::Vector2<int>	dir;
	sf::RenderWindow	*window;
	
	void checkCollision();

};

