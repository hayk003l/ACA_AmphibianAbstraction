#ifndef __CREEPER__
#define __CREEPER__
#include "Animal.hpp"
#include <string>

class Creeper : virtual public Animal {
    public:
        Creeper(const int& maxAge, const std::string& creeperName);
        ~Creeper();

    public:
        virtual std::string getCreeperName() const;

    private:
        std::string _creeperName;

};



#endif // __CREEPER__