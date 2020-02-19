#include "Level1Scene.h"
#include "Game.h"
#include <iostream>

/*
 * Level1Scene.cpp
 * Andrew Trinidad
 * February 18, 2020
 * Dice thingy
 * Current changes: (In order)
 * -Added Roll Button
 * -Added Labels
 */

Level1Scene::Level1Scene()
{
	start();
}

Level1Scene::~Level1Scene()
{
}

void Level1Scene::draw()
{
	m_pRollButton->draw();
	m_pDiceOneLabel->draw();
	m_pDiceTwoLabel->draw();
	m_pDice1->draw();
	m_pDice2->draw();
}

void Level1Scene::update()
{
	m_pRollButton->setMousePosition(m_mousePosition);
	m_pRollButton->ButtonClick();

	m_pDiceOneLabel->update();
	m_pDiceTwoLabel->update();

}

void Level1Scene::clean()
{
}

void Level1Scene::handleEvents()
{
	int wheel = 0;

	SDL_Event event;
	while(SDL_PollEvent(&event))
	{
		switch (event.type)
		{
		case SDL_QUIT:
			TheGame::Instance()->quit();
			break;
		case SDL_MOUSEMOTION:
			m_mousePosition.x = event.motion.x;
			m_mousePosition.y = event.motion.y;
			break;

		case SDL_MOUSEBUTTONDOWN:
			switch(event.button.button)
			{
			case SDL_BUTTON_LEFT:
				m_pRollButton->setMouseButtonClicked(true);
				break;
			}
		
			break;
		case SDL_MOUSEBUTTONUP:
			switch (event.button.button)
			{
			case SDL_BUTTON_LEFT:
				m_pRollButton->setMouseButtonClicked(false);
				break;
			}
			break;
		case SDL_MOUSEWHEEL:
			wheel = event.wheel.y;
			break;
		case SDL_KEYDOWN:
			switch (event.key.keysym.sym)
			{
			case SDLK_ESCAPE:
				TheGame::Instance()->quit();
				break;
			case SDLK_1:
				TheGame::Instance()->changeSceneState(SceneState::START_SCENE);
				break;
			case SDLK_2:
				TheGame::Instance()->changeSceneState(SceneState::END_SCENE);
				break;
			

				/************************************************************************/
			case SDLK_w:
				
				break;
			case SDLK_s:
				
				break;
			case SDLK_a:

				break;
			case SDLK_d:

				break;
			}
			
			break;
		case SDL_KEYUP:
			switch (event.key.keysym.sym)
			{
			case SDLK_w:
				
				break;

			case SDLK_s:
				
				break;

			case SDLK_a:

				break;
			case SDLK_d:

				break;
			}
			
			break;
		default:
			break;
		}
	}
}

void Level1Scene::start()
{
	SDL_Color black = { 0, 0, 0, 255 };
	
	m_pDiceOneLabel = new Label("1", "Consolas", 40, black,
		glm::vec2(Config::SCREEN_WIDTH - (Config::SCREEN_WIDTH * 0.75), Config::SCREEN_HEIGHT - (Config::SCREEN_HEIGHT / 2.5)));
	m_pDiceOneLabel->setParent(this);
	addChild(m_pDiceOneLabel);
	
	m_pDiceTwoLabel = new Label("2", "Consolas", 40, black,
		glm::vec2(Config::SCREEN_WIDTH - (Config::SCREEN_WIDTH * 0.25), Config::SCREEN_HEIGHT - (Config::SCREEN_HEIGHT / 2.5)));
	m_pDiceTwoLabel->setParent(this);
	addChild(m_pDiceTwoLabel);

	m_pDice1 = new Dice(0);
	m_pDice1->setParent(this);
	addChild(m_pDice1);
	
	m_pDice2 = new Dice2(0);
	m_pDice2->setParent(this);
	addChild(m_pDice2);
	
	m_pRollButton = new RollButton();
	m_pRollButton->setPosition(glm::vec2(Config::SCREEN_WIDTH * 0.5f, Config::SCREEN_HEIGHT - (Config::SCREEN_HEIGHT / 4)));
	addChild(m_pRollButton);
}

glm::vec2 Level1Scene::getMousePosition()
{
	return m_mousePosition;
}

