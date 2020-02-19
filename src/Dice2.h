#pragma once
#ifndef __DICE2__
#define __DICE2__
#include "DisplayObject.h"

/*
 * Dice2.cpp
 * Andrew Trinidad
 * February 18, 2020
 * Dice thingy
 * Current changes: (In order)
 * -Added Dice
 */

class Dice2 : public DisplayObject
{
public:
	Dice2(int num);
	~Dice2();

	void draw() override;
	void update() override;
	void clean() override;
};

#endif /* defined (__DICE2__) */