#pragma once
#ifndef _OBSTACLE_H_
#define _OBSTACLE_H_
#include "DisplayObject.h"

class Obstacle : public DisplayObject
{
public:
	Obstacle();

	~Obstacle();
private:
	void draw();
	void Update();
	void clean();
};

#endif

