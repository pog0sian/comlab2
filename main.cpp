#include <iostream>
#include "CA.cpp"
#include "CB.cpp"

void foo(IX* pIX) {
    pIX->Fx1();
    pIX->Fx2();
}

int main() {
    std::cout << "Client: creating component pA" << std::endl;
    CA* pA = new CA(1.789) ;

    std::cout << "Client: creating component pB" << std::endl;
    CB* pB = new CB;

    IX* pIX = pA;
    foo(pIX);

    pIX = pB;
    foo(pIX);

    return 0;
}

