#include "Empresa.h"

using namespace std;

int main()
{
    Empresa e = Empresa();

    e.agregarVendedor(0, "Juan");
    e.agregarVendedor(1, "Martina");
    e.agregarVendedor(2, "Pedro");

    e.agregarZona(0, "Nuniez");
    e.agregarZona(1, "Belgrano");
    e.agregarZona(2, "Palermo");
    e.agregarZona(3, "Caballito");

    e.vender(0,0,0,25.5);
    e.vender(0,0,1,100);
    e.vender(0,1,2,300);
    e.vender(0,2,3,40);
    e.vender(0,3,4,500);
    e.vender(1,0,5,100);
    e.vender(1,1,6,800);
    e.vender(1,2,7,70);
    e.vender(1,3,8,105);
    e.vender(2,0,9,99.9);
    e.vender(2,1,10,80.5);
    e.vender(2,2,11,97.5);
    e.vender(2,3,12,107.8);

    e.totalZonas();

    e.premiarVendedor();

    e.zonaMenorRecaudacionVendedores();

    return 0;
}
