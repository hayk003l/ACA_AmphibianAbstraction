#include "Fish.hpp"


Fish::Fish(const int& maxAge, const std::string& fishName) : Animal(maxAge), _fishName(fishName) {
    std::cout << __func__ << std::endl;
}
Fish::~Fish() {}


std::string Fish::getFishName() const {
    return _fishName;
}