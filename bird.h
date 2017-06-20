/*************************************************************
 * File: bird.h
 * Author: Amy Chambers
 *
 * Description: Defines Bird
 *************************************************************/

#ifndef BIRD_H
#define BIRD_H
#define BIRD_SIZE 15
#include "flyingObject.h"

class Bird : public FlyingObject
{
protected:
   int hp;
   int points;
   
public:
   Bird();
   virtual void draw();
   int hit();

};

#endif
