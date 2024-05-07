#ifndef __ANIMAL__
#define __ANIMAL__
#include <iostream>

class Animal {
    public:
        Animal(const int& maxAge);
        ~Animal();

    public:
        int getMaxAge() const;

    private:
        int _maxAge = 0;
};


#endif // __ANIMAL__