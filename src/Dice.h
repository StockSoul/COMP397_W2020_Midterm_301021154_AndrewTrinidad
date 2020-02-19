#pragma once
#ifndef __DICE__
#define __DICE__
#include "DisplayObject.h"

/*
 * Dice.h
 * Andrew Trinidad
 * February 18, 2020
 * Dice thingy
 * Current changes: (In order)
 * -Added Dice
 */

class Dice : public DisplayObject
{
public:
	Dice(int num);
	~Dice();

	void draw() override;
	void update() override;
	void clean() override;
};

#endif /* defined (__DICE__) */