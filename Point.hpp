#ifndef Point_HPP
#define Point_HPP
#include <iostream>

class Point {
private:
  int x;
  int y;

public:
  void setX(int a);
  void setY(int b);
  int getX();
  int getY();
  Point(int a, int b);
  Point();

  static Point ORIGINE;
};
#endif