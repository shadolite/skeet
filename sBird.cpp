/*************************************************************
 * File: sBird.cpp
 * Author: Amy Chambers
 *
 * Description: Contains the function bodies for the
 * Sacred Bird
 *************************************************************/

#include "sBird.h"

#include <cassert>

sBird :: sBird()
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
   velocity.setDx(random(3, 6));
   hp = 1;
   points = -10;
}

void sBird :: draw() 
{
   drawSacredBird(point, BIRD_SIZE);
}
