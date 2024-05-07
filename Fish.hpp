#ifndef __FISH__
#define __FISH__
#include "Animal.hpp"
#include <string>

class Fish : virtual public Animal {

public:
    Fish(const int& maxAge, const std::string& fishName);
    ~Fish();

public:
    virtual std::string getFishName() const;
    
private:
    std::string _fishName;
};





#endif // __FISH__