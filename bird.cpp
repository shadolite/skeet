/*************************************************************
 * File: bird.cpp
 * Author: Amy Chambers
 *
 * Description: Contains the function bodies for Bird
 *************************************************************/

#include "bird.h"

#include <cassert>

Bird :: Bird() 
{
   point.setX(-200);
   point.setY(random(-200, 200));
   if (point.getY() > 0)
   {
      velocity.setDy(random(-4, -1));
   }
   else
   {
      velocity.setDy(random(1, 4));
   }
   getVelocity().setDx(random(3, 6));
   velocity.setDx(random(3, 6));
   hp = 1;
   points = 1;
   alive = true;
}

void Bird :: draw()
{
   drawCircle(point, BIRD_SIZE);
}

int Bird :: hit()
{
	if (hp != 1)
	{
		--hp;
		return points;
	}
	else
	{
		kill();
		return points + 1;
	}
}
