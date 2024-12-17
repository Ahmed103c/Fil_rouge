#include "Cercle.hpp"
#include "Liste.hpp"
#include "Rectangle.hpp"
#include <iostream>

int main() {

  Liste l;
  l.afficher();
  Rectangle r1(10, 10, 20, 20);
  l.ajouter(r1);
  l.afficher();
  Cercle c1(15, 15, 5, 5);
  l.ajouter(c1);
  l.afficher();
  Rectangle r2(20, 20, 30, 30);
  l.ajouter(r2);
  l.afficher();
  std::cout << "ordre de r1 " << r1.ordre << std::endl;
  std::cout << "ordre de c1 " << c1.ordre << std::endl;
  std::cout << "ordre de r2 " << r2.ordre << std::endl;
  l.toString();
}