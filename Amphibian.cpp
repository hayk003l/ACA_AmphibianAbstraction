#include "Amphibian.hpp"


Amphibian::Amphibian(const int& maxAge, std::string amphibianName) : Animal(maxAge), Creeper(maxAge, "none"), Fish(maxAge, "none"), _amphibianName(amphibianName) {
    std::cout << __func__ << std::endl;
}
Amphibian::~Amphibian() {}

std::string Amphibian::getAmphibianName() const {
    return _amphibianName;
}

std::string Amphibian::getCreeperName() const {
    return "none";
}
std::string Amphibian::getFishName() const {
    return "none";
}