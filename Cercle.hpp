#ifndef Cercle_HPP
#define Cercle_HPP

#include "Forme.hpp"
#include <iostream>

class Cercle : public Forme {

private:
  int x;
  int y;
  int w;
  int h;
  int cx;
  int cy;
  int rayon;

public:
  int ordre = 0; // si on met pas = 0 dans la crétion de tableau dans liste.cpp
                 // on peut avoir Erreur de segmentation !!
  Cercle(int x1, int y1, int w1, int h1) : x(x1), y(y1), w(w1), h(h1) {}
  Cercle(int cx_, int cy_, int rayon_) : cx(cx_), cy(cy_), rayon(rayon_) {}
  Cercle() : Cercle(0, 0, 0, 0) {}
  void toString();
};

#endif