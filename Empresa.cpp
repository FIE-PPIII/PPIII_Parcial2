//
// Created by Usuario on 11/19/2022.
//

#include "Empresa.h"

void Empresa::agregarVendedor(int id, string nombre) {
    this->vendedores[id] = Vendedor(id, nombre);
}

void Empresa::agregarZona(int id, string nombre) {
    this->zonas[id] = Zona(id, nombre);
}

void Empresa::vender(int idVendedor, int idZona, int idVenta, double monto) {
    this->zonas.at(idZona).agregarVenta(idVenta, monto, &(this->vendedores[idVendedor]));
}

void Empresa::totalZonas() {
    for (map<int, Zona>::iterator it = this->zonas.begin(); it != this->zonas.end(); it++) {
        cout<<"En "<<(it->second.getNombre())<<" se recaudo $"
        <<(it->second.getRecaudacion())<<endl;
    }
}

void Empresa::premiarVendedor() {
    Vendedor* aux_vendedor = nullptr;
    for (map<int, Vendedor>::iterator it = this->vendedores.begin(); it != this->vendedores.end(); it++) {
        if (aux_vendedor == nullptr) {
            aux_vendedor = &(it->second);
        } else {
            if (aux_vendedor->getRecaudacion() < it->second.getRecaudacion()) {
                aux_vendedor = &(it->second);
            }
        }
    }
    cout<<"El mejor vendedor es "<<(aux_vendedor->getNombre())<<" con una recaudacion de $"<<
    (aux_vendedor->getRecaudacion())<<endl<<"Recibe un premio por $"<<(0.05 * aux_vendedor->getRecaudacion())<<endl;
}

void Empresa::zonaMenorRecaudacionVendedores() {
    double auxMontoZona = 0;
    for (map<int, Vendedor>::iterator it = this->vendedores.begin(); it != this->vendedores.end(); it++) {
        auxMontoZona = 0;
        Zona* auxZona = nullptr;
        for (map<int, Zona>::iterator zona = this->zonas.begin(); zona != this->zonas.end(); zona++) {
            if (auxZona == nullptr) {
                auxZona = &(zona->second);
                auxMontoZona = auxZona->getRecaudacion(&(it->second));
            } else {
                double tempMonto = zona->second.getRecaudacion(&(it->second));
                if (tempMonto < auxMontoZona) {
                    auxMontoZona = tempMonto;
                    auxZona = &(zona->second);
                }
            }
        }
        cout<<(it->second.getNombre())<<" vendio menos en "<<auxZona->getNombre()<<endl;
    }
}