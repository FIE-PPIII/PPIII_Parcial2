//
// Created by Usuario on 11/19/2022.
//

#ifndef BASE_CPP_EMPRESA_H
#define BASE_CPP_EMPRESA_H

#include <iostream>
#include "Zona.h"

using namespace std;

class Empresa {
private:
    map<int, Vendedor> vendedores;
    map<int, Zona> zonas;

public:
    Empresa() {}
    ~Empresa() {}

    void agregarVendedor(int, string);
    void agregarZona(int, string);
    void vender(int, int, int, double);

    void totalZonas();
    void premiarVendedor();
    void zonaMenorRecaudacionVendedores();
};


#endif //BASE_CPP_EMPRESA_H
