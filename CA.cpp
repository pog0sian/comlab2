#include <iostream>
#include "IX.cpp"
#include "IY.cpp"


class CA: public IX {
public:

    double m_Fx2;
    double m_Fx3;
    double m_Fx4;

    void Fx1() override { std::cout << "CA::Fx1" << std::endl; }

    void Fx2() override { std::cout << m_Fx2 << std::endl; }

    void Fx3() override { std::cout << m_Fx3 << std::endl; }

    void Fx4() override { std::cout << m_Fx4 << std::endl; }

    CA (double d) {
        m_Fx2 = d * d;
        m_Fx3 = d * d * d;
        m_Fx4 = d * d * d * d;
    }
};

