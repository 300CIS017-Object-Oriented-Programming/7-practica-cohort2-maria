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
    Producto();
    Producto(int id, string nombre, float precio, int cantidad);

    void mostrarInfo();
};

#endif

