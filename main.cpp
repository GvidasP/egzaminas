#include <iostream>
#include "Statybinis_produktas.h"
#include "Statybines_medziagos.h"

int main()
{
    Statybinis_produktas cementas{5, 10, 3};
    Statybinis_produktas plytos{3, 10, 3};
    Statybinis_produktas klijai{5, 10, 5};
    Statybinis_produktas plyteles{6, 7, 8};
    Statybinis_produktas glaistas{10, 0, 9};

    std::cout << cementas;
    std::cout << plytos;
    std::cout << klijai;
    std::cout << plyteles;
    std::cout << glaistas << std::endl;

    Statybinis_produktas c = glaistas;
    std::cout << c << std::endl;

    glaistas = cementas;
    std::cout << glaistas;

    std::cout << "Iveskite statybini_produkta (smelis, druska, vanduo):\n";
    Statybinis_produktas produktas;
    std::cin >> produktas;
    std::cout << "Ivesta: " << produktas << std::endl;
    return 0;
}
