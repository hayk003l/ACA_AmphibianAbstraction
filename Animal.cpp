#include "Animal.hpp"


 Animal::Animal(const int& maxAge) : _maxAge(maxAge) {     std::cout << __func__ << std::endl;}
 Animal::~Animal() {
}

int Animal::getMaxAge() const {
    return _maxAge;
}   