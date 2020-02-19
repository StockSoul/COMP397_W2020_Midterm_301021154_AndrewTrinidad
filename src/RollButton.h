#pragma once
#ifndef __ROLL_BUTTON__
#define __ROLL_BUTTON__

/*
 * RollButton.h
 * Andrew Trinidad
 * February 18, 2020
 * Dice thingy
 * Current changes: (In order)
 * -Added Roll Button
 * -Added Die1 and Die2
 */

#include "Button.h"

class RollButton : public Button
{
public:
	RollButton();
	~RollButton();

	int Die1;
	int Die2;

	bool ButtonClick() override;
private:
	bool m_isClicked;
};
#endif /* defined (__ROLL_BUTTON__) */