#include "Liste.hpp"

int Liste::compteur = 0;

// std::string toString() {}

void Liste::ajouter(Cercle &c) {
  cercles[nb_c] = c;
  nb_c++;
  c.ordre += nb_c;
};
void Liste::ajouter(
    Rectangle &r) { // Importnce de mettre & pour que ordre soit modifié
  rectangles[nb_r] = r;
  nb_r++;
  r.ordre += nb_r; // si non chaque ordre de chaque objet est initialisé a zero
};

void Liste::afficher() {
  std::cout << "nb_r = " << nb_r << std::endl;
  std::cout << "nb_c = " << nb_c << std::endl;
  std::cout << "************************" << std::endl;
}

int Liste::getCompteur() const { return compteur; }

void Liste::toString() {
  std::cout << "** Rectangles : **" << std::endl;
  for (int i = 0; i < nb_r; i++) {
    rectangles[i].toString();
    std::cout << "Rectangle suivant  : " << std::endl;
  }
  std::cout << "-----------------------------------------" << std::endl;
  std::cout << "** Cercles : **" << std::endl;
  for (int i = 0; i < nb_c; i++) {
    cercles[i].toString();
    std::cout << "Cercle suivant  : " << std::endl;
  }
}