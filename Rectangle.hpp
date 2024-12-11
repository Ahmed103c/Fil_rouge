#ifndef Rectangle_HPP
#define Rectangle_HPP

#include <iostream>

class Rectangle {

private:
  int x;
  int y;
  int w;
  int h;
  int ordre;

public:
  Rectangle(int x1, int y1, int w1, int h1) : x(x1), y(y1), w(w1), h(h1) {}
  Rectangle() : Rectangle(0, 0, 0, 0) {}
  std::string toString() {
    std::cout << x << " " << y << " " << w << " " << h << std::endl;
  }
};

#endif