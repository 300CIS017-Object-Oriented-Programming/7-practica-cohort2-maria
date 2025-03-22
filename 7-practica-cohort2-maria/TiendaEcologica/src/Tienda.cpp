#include "Tienda.h"

Tienda::Tienda() {
    capacidad = 2;
    numProductos = 0;
    productos = new Producto[capacidad];
}

Tienda::~Tienda() {
    delete[] productos;
}

void Tienda::registrarProducto(int id, string nombre, float precio, int cantidad) {
    if (numProductos >= capacidad) {

        capacidad *= 2;
        Producto* nuevoArray = new Producto[capacidad];

        for (int i = 0; i < numProductos; i++) {
            nuevoArray[i] = productos[i];
        }

        delete[] productos;
        productos = nuevoArray;
    }


    productos[numProductos] = Producto(id, nombre, precio, cantidad);
    numProductos++;

    cout << "Producto agregado con éxito!\n";
}

void Tienda::mostrarProductos() {
    if (numProductos == 0) {
        cout << "No hay productos en la tienda.\n";
        return;
    }

    cout << "\nProductos en la tienda:\n";
    for (int i = 0; i < numProductos; i++) {
        productos[i].mostrarInfo();
    }
}


