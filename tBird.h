/*************************************************************
 * File: tBird.h
 * Author: Amy Chambers
 *
 * Description: Defines tBird
 *************************************************************/

#ifndef TBIRD_H
#define TBIRD_H

#include "bird.h"

class tBird : public Bird
{
private:

   
public:
   tBird();
   virtual void draw();
   virtual int hit();
};

#endif
