//
// Created by Usuario on 11/19/2022.
//

#include "Venta.h"

Venta::Venta(int id, double monto, Vendedor* vendedor) {
    this->idVenta = id;
    this->monto = monto;
    this->vendedor = vendedor;
}