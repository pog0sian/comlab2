#include <iostream>
#include "IX.cpp"

class CB : public IX {
public:

    virtual void Fx1() { std::cout << "CB::Fx1" << std::endl; }
    virtual void Fx2() { std::cout << "CB::Fx2" << std::endl; }
    virtual void Fx3() { std::cout << "CB::Fx3" << std::endl; }
    virtual void Fx4() { std::cout << "CB::Fx4" << std::endl; }
};
