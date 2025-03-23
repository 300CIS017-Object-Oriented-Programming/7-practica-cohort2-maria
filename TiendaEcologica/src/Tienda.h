#ifndef TIENDA_H
#define TIENDA_H

#include <iostream>
#include <vector>
#include "Producto.h"
#include "Cliente.h"
#include "Venta.h"

using namespace std;

class Tienda {
private:
    vector<Producto> productos;
    vector<Cliente> clientes;
    vector<Venta> ventas;
    int idVenta = 1;

public:
    void registrarProducto(int id, string nombre, float precio, int cantidad);
    void registrarCliente(int id, string nombre);
    void mostrarProductos();
    void mostrarClientes();
    void registrarVenta(int idCliente, int idProducto, int cantidad);
    void mostrarVentas();
};

#endif