#include "Dice.h"
#include "Game.h"

Dice::Dice(int num)
{
	if(num == 0)
	{
		TheTextureManager::Instance()->load("../Assets/textures/blank.png",
			"Dice", TheGame::Instance()->getRenderer());
	}

	if (num == 1)
	{
		TheTextureManager::Instance()->load("../Assets/textures/1.png",
			"Dice", TheGame::Instance()->getRenderer());
	}

	if (num == 2)
	{
		TheTextureManager::Instance()->load("../Assets/textures/2.png",
			"Dice", TheGame::Instance()->getRenderer());
	}

	if (num == 3)
	{
		TheTextureManager::Instance()->load("../Assets/textures/3.png",
			"Dice", TheGame::Instance()->getRenderer());
	}

	if (num == 4)
	{
		TheTextureManager::Instance()->load("../Assets/textures/4.png",
			"Dice", TheGame::Instance()->getRenderer());
	}

	if (num == 5)
	{
		TheTextureManager::Instance()->load("../Assets/textures/5.png",
			"Dice", TheGame::Instance()->getRenderer());
	}

	if (num == 6)
	{
		TheTextureManager::Instance()->load("../Assets/textures/6.png",
			"Dice", TheGame::Instance()->getRenderer());
	}

	// measure size by querying the texture
	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("Dice");
	setWidth(size.x);
	setHeight(size.y);

	setPosition(glm::vec2(Config::SCREEN_WIDTH - (Config::SCREEN_WIDTH * 0.75), Config::SCREEN_HEIGHT - (Config::SCREEN_HEIGHT / 1.5)));
	setIsColliding(false);
	setType(GameObjectType::DICE);
}

Dice::~Dice()
{
}

void Dice::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;

	TheTextureManager::Instance()->draw("Dice", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), 0, 255, true);
}

void Dice::update()
{
}

void Dice::clean()
{
}
