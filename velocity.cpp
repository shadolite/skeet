/***********************************************************************
 * Source File:
 *    Velocity: Class definition for velocity of lander object
 * Author:
 *    Amy Chambers
 * Summary:
 *    Everythibng needed for manipulation of the lander velocity.
 ************************************************************************/

#include "velocity.h"

/******************************************
 * getDx
 * 
 *****************************************/
float Velocity::getDx()
{
   return Dx;
}

/******************************************
 * getDy
 *
 *****************************************/
float Velocity::getDy()
{
   return Dy;
}

/******************************************
 * setDx
 *
 *****************************************/
void Velocity::setDx(const float Dx)
{
   this->Dx = Dx;
}

/******************************************
 * setDy
 *
 *****************************************/
void Velocity::setDy(const float Dy)
{
   this->Dy = Dy;
}
