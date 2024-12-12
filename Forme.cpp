#include "Forme.hpp"

int Forme::nbFormes = 0;

Forme::Forme(int w_, int h_, Point pointForme_, COULEURS couleur_)
    : w(w_), h(h_), pointForme(pointForme_), couleur(couleur_) {
  nbFormes++;
}
Forme::Forme(Point pointForme_, COULEURS couleur_)
    : pointForme(pointForme_), couleur(couleur_) {
  nbFormes++;
}

Forme::Forme() : w(0), h(0), pointForme(), couleur(COULEURS::BLEU) {
  nbFormes++;
}

void Forme::setX(int a) { pointForme.setX(a); }
void Forme::setY(int b) { pointForme.setY(b); }
void Forme::setCouleur(COULEURS couleur_) { couleur = couleur_; }