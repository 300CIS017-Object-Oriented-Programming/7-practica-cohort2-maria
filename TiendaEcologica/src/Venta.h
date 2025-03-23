#ifndef VENTA_H
#define VENTA_H

#include <iostream>
#include <vector>
#include "Cliente.h"
#include "Producto.h"
using namespace std;

class Venta {
private:
    int id;
    Cliente cliente;
    vector<Producto> productosVendidos;
    float total;

public:
    Venta(int _id, Cliente _cliente);
    void agregarProductoVendido(Producto p, int cantidad);
    void mostrarDetalleVenta();
};

#endif