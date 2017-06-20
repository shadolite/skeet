/*************************************************************
 * File: tBird.cpp
 * Author: Amy Chambers
 *
 * Description: Contains the function bodies for Tough Bird
 *************************************************************/

#include "tBird.h"

#include <cassert>

tBird :: tBird()
{
   point.setX(-200);
   point.setY(random(-200, 200));
   if (point.getY() > 0)
   {
      velocity.setDy(random(-3, -1));
   }
   else
   {
      velocity.setDy(random(1, 3));
   }
   velocity.setDx(random(2, 4));
   hp = 3;
   points = 1;
}

void tBird :: draw() 
{
   drawToughBird(point, BIRD_SIZE, hp);
}
