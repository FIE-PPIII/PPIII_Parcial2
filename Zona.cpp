//
// Created by Usuario on 11/19/2022.
//

#include "Zona.h"

Zona::Zona(int id, string nombre) {
    this->idZona = id;
    this->nombre = nombre;
}

void Zona::agregarVenta(int id, double monto, Vendedor* vendedor) {
    this->ventas[id] = Venta(id, monto, vendedor);
    // agrego recaudacion a vendedor
    vendedor->setRecaudacion(monto + vendedor->getRecaudacion());
}

double Zona::getRecaudacion() {
    double total = 0;
    for (map<int, Venta>::iterator it = this->ventas.begin(); it != this->ventas.end(); it++) {
        total += it->second.getMonto();
    }
    return total;
}

double Zona::getRecaudacion(Vendedor * vendedor) {
    double total = 0;
    for (map<int, Venta>::iterator it = this->ventas.begin(); it != this->ventas.end(); it++) {
        if (it->second.getVendedor() == vendedor)
            total += it->second.getMonto();
    }
    return total;
}