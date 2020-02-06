#pragma once
#include "Framework/GameObject.h"

class Player : public GameObject
{
public:
	Player();
	~Player();

	void handleInput(float dt);
	void update(float dt);
	//float velocity;
	//sf::Vector2<float>	speed;
	//sf::Vector2<int>	dir;

};

