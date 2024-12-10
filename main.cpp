#include "Cercle.hpp"
#include "Rectangle.hpp"
#include <iostream>

int main() {

  Cercle cer(10, 10, 30, 30);
  cer.toString();
  Rectangle rect(30, 30, 15, 15);
  rect.toString();
}