/*************************************************************
 * File: bullet.h
 * Author: Amy Chambers
 *
 * Description: Defines Bullet
 *************************************************************/

#ifndef BULLET_H
#define BULLET_H

#define BULLET_SPEED 10.0
#define _USE_MATH_DEFINES

#include "flyingObject.h"

class Bullet : public FlyingObject
{
public:
   Bullet();
   void fire(const Point point, const float angle);
   void draw();
};

#endif
