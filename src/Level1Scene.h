#pragma once
#ifndef __LEVEL_1_SCENE__
#define __LEVEL_1_SCENE__

/*
 * Level1Scene.h
 * Andrew Trinidad
 * February 18, 2020
 * Dice thingy
 * Current changes: (In order)
 * -Added Roll Button
 * -Added Labels
 */

#include "Scene.h"
#include "Label.h"
#include "RollButton.h"
#include "Dice.h"
#include "Dice2.h"

class Level1Scene : public Scene
{
public:
	Level1Scene();
	~Level1Scene();
	
	void draw() override;
	void update() override;
	void clean() override;
	void handleEvents() override;
	void start() override;

	// getters
	glm::vec2 getMousePosition();

private:
	// game objects
	RollButton* m_pRollButton;
	Label* m_pDiceOneLabel;
	Label* m_pDiceTwoLabel;
	Dice* m_pDice1;
	Dice2* m_pDice2;
	


	// private data member
	glm::vec2 m_mousePosition;
	
	
};

#endif /* defined (__LEVEL_1_SCENE__) */
