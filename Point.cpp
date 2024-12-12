#include "Point.hpp"

Point::Point(int a, int b) : x(a), y(b) {}

Point::Point()
    : Point(0, 0) {
} // on peut Point::Point() : Point(ORIGINE) si point constructeur par copie

void Point::setX(int a) { x = a; }
void Point::setY(int b) { y = b; }

int Point::getX() { return x; }
int Point::getY() { return y; }

Point Point::ORIGINE = Point();
