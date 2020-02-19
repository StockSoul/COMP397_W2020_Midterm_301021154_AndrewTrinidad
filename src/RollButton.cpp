#include "RollButton.h"
#include "Game.h"
#include "Util.h"

/*
 * RollButton.cpp
 * Andrew Trinidad
 * February 18, 2020
 * Dice thingy
 * Current changes: (In order)
 * -Added Roll Button
 * -Button Roll on click
 */

RollButton::RollButton()
	//Called Super Constructor
	:Button(
		"../Assets/textures/rollButton.png",
		"startButton",
		ROLL_BUTTON, glm::vec2(400.0f, 300.0f)), m_isClicked(false)
{
	TheSoundManager::Instance()->load("../Assets/audio/nut.mp3", "nut", SOUND_SFX);
}


RollButton::~RollButton()
{
}

bool RollButton::ButtonClick()
{
	if (m_mouseOver() && m_mouseButtonClicked)
	{
		if (!m_isClicked)
		{
			int Dice1 = 0;
			int Dice2 = 0;

			Dice1 = Util::RandomRange(1, 6);
			Dice2 = Util::RandomRange(1, 6);

			std::cout << Dice1 << std::endl;
			std::cout << Dice2 << std::endl;

			Die1 = Dice1;
			Die2 = Dice2;

			TheSoundManager::Instance()->playSound("nut", 0);
			
			m_isClicked = true;

		}
		return true;
	}
	else
	{
		m_isClicked = false;
	}

	return false;
}
