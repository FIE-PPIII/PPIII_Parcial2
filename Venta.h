//
// Created by Usuario on 11/19/2022.
//

#ifndef BASE_CPP_VENTA_H
#define BASE_CPP_VENTA_H

#include "Vendedor.h"

using namespace std;

class Venta {
private:
    int idVenta;
    double monto;
    Vendedor* vendedor;

public:
    Venta(int, double, Vendedor*);
    Venta() {}  // para map
    ~Venta() {}

    int getId();
    double getMonto();
    Vendedor* getVendedor();
};

inline int Venta::getId() {
    return this->idVenta;
}

inline double Venta::getMonto() {
    return this->monto;
}

inline Vendedor* Venta::getVendedor() {
    return this->vendedor;
}

#endif //BASE_CPP_VENTA_H
