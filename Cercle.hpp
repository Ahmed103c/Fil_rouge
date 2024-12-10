#ifndef Cercle_HPP
#define Cercle_HPP

#include <iostream>

class Cercle {

private:
  int x;
  int y;
  int w;
  int h;

public:
  Cercle(int x1, int y1, int w1, int h1) : x(x1), y(y1), w(w1), h(h1) {}
  Cercle(int cx, int cy, int rayon) {}
  std::string toString() {
    std::cout << x << " " << y << " " << w << " " << h << std::endl;
  }
};

#endif