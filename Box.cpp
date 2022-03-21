#include "Box.h"
#include<iostream>

void Box :: setWidth(double w)
{
  width =w;
}
void Box :: setLength(double l)
{
  length=l;
}
void Box :: setHeight(double h)
{
  height=h;
}
int Box :: getWidth()
{
  return width;
}
int Box :: getLength()
{
  return length;
}
int Box :: getHeight()
{
  return height;
}

int Box::calcVolume() {

  return width*length*height;
}
