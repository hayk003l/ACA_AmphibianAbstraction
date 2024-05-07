#ifndef __AMPHIBIAN__
#define __AMPHIBIAN__
#include "Creeper.hpp"
#include "Fish.hpp"
#include <string>


class Amphibian : public Fish, public Creeper
{
public:
    Amphibian(const int& maxAge, std::string amphibianName);
    ~Amphibian();

public:
    std::string getAmphibianName() const;
    std::string getCreeperName() const override;
    std::string getFishName() const override;
    
private:
    std::string _amphibianName;

};


#endif // __AMPHIBIAN__
