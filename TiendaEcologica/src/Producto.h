#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <iostream>
using namespace std;

class Producto {
private:
    int id;
    string nombre;
    float precio;
    int cantidad;

public:
    Producto(int _id, string _nombre, float _precio, int _cantidad);
    int getId();
    string getNombre();
    float getPrecio();
    int getCantidad();
    void descontarStock(int cantidadVendida);
    void mostrarInfo();
};

#endif

