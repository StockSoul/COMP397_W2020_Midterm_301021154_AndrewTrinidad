#pragma once
#ifndef __DICE2__
#define __DICE2__
#include "DisplayObject.h"

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