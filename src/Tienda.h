#ifndef TIENDA_H
#define TIENDA_H

#include <iostream>
#include "Producto.h"
#include "Cliente.h"

class Tienda {
private:
    Producto* productos;
    int numProductos;
    int capacidad;

    Cliente* clientes;
    int numCliente;
    int capacidadc;

public:
    Tienda();
    ~Tienda();

    void registrarProducto(int id, string nombre, float precio, int cantidad);
    void mostrarProductos();
    void registrarCliente(int id, string nombre);
    void mostrarCliente();
};


#endif
