#ifndef Liste_HPP
#define Liste_HPP

#include "Cercle.hpp"
#include "Rectangle.hpp"
#include <iostream>

const int taille = 10;

class Liste {

public:
  Cercle cercles[taille];
  int nb_c;
  Rectangle rectangles[taille];
  int nb_r;
  static int compteur;
  Liste() : nb_c(0), nb_r(0) {}
  void ajouter(Cercle &c);
  void ajouter(Rectangle &r);
  void afficher();
  int getCompteur() const;
  void toString();
};

#endif