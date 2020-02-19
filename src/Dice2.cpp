#include "Dice2.h"
#include "Game.h"

/*
 * Dice2.cpp
 * Andrew Trinidad
 * February 18, 2020
 * Dice thingy
 * Current changes: (In order)
 * -Added Dice2
 */

Dice2::Dice2(int roll)
{
	if (roll == 0)
	{
		TheTextureManager::Instance()->load("../Assets/textures/blank.png",
			"Dice2", TheGame::Instance()->getRenderer());
	}

	if (roll == 1)
	{
		TheTextureManager::Instance()->load("../Assets/textures/1.png",
			"Dice2", TheGame::Instance()->getRenderer());
	}

	if (roll == 2)
	{
		TheTextureManager::Instance()->load("../Assets/textures/2.png",
			"Dice2", TheGame::Instance()->getRenderer());
	}

	if (roll == 3)
	{
		TheTextureManager::Instance()->load("../Assets/textures/3.png",
			"Dice2", TheGame::Instance()->getRenderer());
	}

	if (roll == 4)
	{
		TheTextureManager::Instance()->load("../Assets/textures/4.png",
			"Dice2", TheGame::Instance()->getRenderer());
	}

	if (roll == 5)
	{
		TheTextureManager::Instance()->load("../Assets/textures/5.png",
			"Dice2", TheGame::Instance()->getRenderer());
	}

	if (roll == 6)
	{
		TheTextureManager::Instance()->load("../Assets/textures/6.png",
			"Dice2", TheGame::Instance()->getRenderer());
	}

	// measure size by querying the texture
	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("Dice2");
	setWidth(size.x);
	setHeight(size.y);

	setPosition(glm::vec2(Config::SCREEN_WIDTH - (Config::SCREEN_WIDTH * 0.25), Config::SCREEN_HEIGHT - (Config::SCREEN_HEIGHT / 1.5)));
	setIsColliding(false);
	setType(GameObjectType::DICE2);
}

Dice2::~Dice2()
{
}

void Dice2::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;

	TheTextureManager::Instance()->draw("Dice2", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), 0, 255, true);
}

void Dice2::update()
{
}

void Dice2::clean()
{
}
