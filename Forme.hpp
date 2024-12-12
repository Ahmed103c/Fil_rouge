#ifndef Forme_HPP
#define Forme_HPP
#include "Point.hpp"
#include <iostream>

enum class COULEURS { NOIR, BLANC, BLEU, VERT, ROUGE, JAUNE };
class Forme {
  static int nbFormes;

private:
  int w;
  int h;
  Point pointForme;
  COULEURS couleur;

public:
  Forme(int w_, int h_, Point pointForme_, COULEURS couleur_);
  Forme(Point pointForme_, COULEURS couleur_);
  Forme();
  Point &getPoint() { return pointForme; };
  // Point const& get () const; ???

  COULEURS getCouleur() { return couleur; };
  int getLargeur() { return w; }
  int getHauteur() { return h; }

  void setX(int a);
  void setY(int b);
  void setCouleur(COULEURS couleur_);
  int getId() { return id; }
  static int prochainId();
  int id;
};

#endif
