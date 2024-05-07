#include "Creeper.hpp"

Creeper::Creeper(const int& maxAge, const std::string& creeperName) : Animal(maxAge), _creeperName(creeperName) {
    std::cout << __func__ << std::endl;
}
Creeper::~Creeper() {}

std::string Creeper::getCreeperName() const {
    return _creeperName;
}

