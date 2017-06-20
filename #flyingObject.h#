/*************************************************************
 * File: flyingObject.h
 * Author: Amy Chambers
 *
 * Description: Defines FlyingObject
 *************************************************************/

#ifndef FLYINGOBJECT_H
#define FLYINGOBJECT_H

#include "point.h"
#include "velocity.h"
#include "uiDraw.h"

class FlyingObject 
{
protected:
   Point point;
   Velocity velocity;
   bool alive;
   
public:
   Velocity getVelocity() const;
   void setVelocity(Velocity velocity);
   Point getPoint() const;
   void setPoint(Point point);
   void kill();
   bool isAlive();

   void advance();
};

#endif
