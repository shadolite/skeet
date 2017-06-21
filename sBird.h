/*************************************************************
 * File: sBird.h
 * Author: Amy Chambers
 *
 * Description: Defines sBird
 *************************************************************/

#ifndef SBIRD_H
#define SBIRD_H

#include "bird.h"


class sBird : public Bird
{
private:

   
public:
   sBird();
   virtual void draw();
   virtual int hit();
};

#endif
