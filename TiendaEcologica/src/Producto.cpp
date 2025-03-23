#include "Producto.h"

Producto::Producto(int _id, string _nombre, float _precio, int _cantidad) {
    id = _id;
    nombre = _nombre;
    precio = _precio;
    cantidad = _cantidad;
}

int Producto::getId() { return id; }
string Producto::getNombre() { return nombre; }
float Producto::getPrecio() { return precio; }
int Producto::getCantidad() { return cantidad; }

void Producto::descontarStock(int cantidadVendida) {
    cantidad -= cantidadVendida;
}

void Producto::mostrarInfo() {
    cout << "ID: " << id << " | " << nombre << " | Precio: $" << precio
         << " | Stock: " << cantidad << endl;
}