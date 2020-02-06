#pragma once
#include "Framework/GameObject.h"

class Enemy : public GameObject
{
public:
	Enemy();
	~Enemy();

	void handleInput(float dt);
	void update(float dt);
	void setWindow(sf::RenderWindow* hwnd) { window = hwnd; };
	//float velocity;
	//sf::Vector2<float>	speed;
	//sf::Vector2<int>	dir;
	//SetWindow setWindow
	sf::RenderWindow* window; 
	
	

};

