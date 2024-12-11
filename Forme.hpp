#include <iostream>

class Forme {
  static int nbFormes;

private:
  int w;
  int h;

public:
  Forme() { nbFormes++; }
};