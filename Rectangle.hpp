#ifndef Rectangle_HPP
#define Rectangle_HPP

#include <iostream>

class Rectangle {

private:
  int x;
  int y;
  int w;
  int h;

public:
  int ordre = 0;
  Rectangle(int x1, int y1, int w1, int h1) : x(x1), y(y1), w(w1), h(h1) {}
  Rectangle() : Rectangle(0, 0, 0, 0) {}
  void toString();
};

#endif