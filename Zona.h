//
// Created by Usuario on 11/19/2022.
//

#ifndef BASE_CPP_ZONA_H
#define BASE_CPP_ZONA_H

#include "Venta.h"
#include <map>

using namespace std;

class Zona {
private:
    int idZona;
    string nombre;
    map<int, Venta> ventas;

public:
    Zona() {}  // para map
    Zona(int, string);
    ~Zona() {};

    void agregarVenta(int, double, Vendedor*);
    double getRecaudacion();
    double getRecaudacion(Vendedor*);

    int getId();
    string getNombre();
};

inline int Zona::getId() {
    return this->idZona;
}

inline string Zona::getNombre() {
    return this->nombre;
}


#endif //BASE_CPP_ZONA_H
