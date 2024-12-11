#include "Cercle.hpp"
#include "Rectangle.hpp"
#include <iostream>

const int taille = 1;

class Liste {

public:
  Cercle cercles[taille];
  int nb_c;
  Rectangle rectangles[taille];
  int nb_v;

  Liste() {}
  int getCompteur();
  std::string toString();
};