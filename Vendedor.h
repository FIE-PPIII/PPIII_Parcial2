//
// Created by Usuario on 11/19/2022.
//

#ifndef BASE_CPP_VENDEDOR_H
#define BASE_CPP_VENDEDOR_H

#include <string>

using namespace std;

class Vendedor {
private:
    int idVendedor;
    string nombre;
    double recaudacion;

public:
    Vendedor(int, string);
    Vendedor() {}  // Para usar operador [] en map

    ~Vendedor();

    int getId();
    string getNombre();

    double getRecaudacion();
    void setRecaudacion(double);

};

inline int Vendedor::getId() {
    return this->idVendedor;
}

inline string Vendedor::getNombre() {
    return this->nombre;
}

inline double Vendedor::getRecaudacion() {
    return this->recaudacion;
}

inline void Vendedor::setRecaudacion(double val) {
    this->recaudacion = val;
}

#endif //BASE_CPP_VENDEDOR_H
