/*************************************************************
 * File: bullet.h
 * Author: Amy Chambers
 *
 * Description: Defines Bullet
 *************************************************************/

#ifndef BULLET_H
#define BULLET_H

#define BULLET_SPEED 10.0

#include "flyingObject.h"

class Bullet : public FlyingObject
{
private:

   
public:
   Bullet();
   void fire(const Point point, const float angle);
   void draw();
   
};

#endif
