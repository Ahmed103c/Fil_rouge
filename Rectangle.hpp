#include <iostream>

class Rectangle {

private:
  int x;
  int y;
  int w;
  int h;

public:
  Rectangle(int x1, int y1, int w1, int h1) : x(x1), y(y1), w(w1), h(h1) {}
  std::string toString() {
    std::cout << x << " " << y << " " << w << " " << h << std::endl;
  }
};