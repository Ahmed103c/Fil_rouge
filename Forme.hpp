#include "Point.hpp"
#include <iostream>

class Forme {
  static int nbFormes;

private:
  Point point;
  int w;
  int h;

public:
  Forme() { nbFormes++; }
};

enum class COULEURS { NOIR, BLANC };
