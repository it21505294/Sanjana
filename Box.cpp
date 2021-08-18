#include "Box.h"

// Implement setters and getters
void Box::setLength(int l)
{
  length = l;
}
int Box::getLength()
{
  return length;
}
void Box::setWidth(int w)
{
  width = w;
}
int Box::getWidth()
{
  return width;
}
void Box::setHeight(int h)
{
  height = h;
}
int Box::getHeight()
{
  return height;
}

// Implemenet the calcVolume() unction
int Box::calcVolume() {
  return length * width * height;
}
