#include "Producto.h"


Producto::Producto() : id(0), nombre(""), precio(0.0), cantidad(0) {}


Producto::Producto(int id, string nombre, float precio, int cantidad)
    : id(id), nombre(nombre), precio(precio), cantidad(cantidad) {}


void Producto::mostrarInfo() {
    cout << "ID: " << id  << nombre << "  Precio: " << precio
         << "  Stock: " << cantidad << endl;
}
