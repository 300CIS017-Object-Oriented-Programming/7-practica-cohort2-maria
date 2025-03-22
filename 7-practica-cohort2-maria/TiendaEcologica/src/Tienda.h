#ifndef TIENDA_H
#define TIENDA_H

#include <iostream>
#include "Producto.h"

class Tienda {
private:
    Producto* productos;
    int numProductos;
    int capacidad;

public:
    Tienda();
    ~Tienda();

    void registrarProducto(int id, string nombre, float precio, int cantidad);
    void mostrarProductos();
};

#endif
