#include "Tienda.h"

void Tienda::registrarProducto(int id, string nombre, float precio, int cantidad) {
    productos.push_back(Producto(id, nombre, precio, cantidad));
    cout << "Producto agregado!\n";
}

void Tienda::registrarCliente(int id, string nombre) {
    clientes.push_back(Cliente(id, nombre));
    cout << "Cliente registrado!\n";
}

void Tienda::mostrarProductos() {
    cout << "\nProductos en la tienda:\n";
    for (Producto &p : productos) {
        p.mostrarInfo();
    }
}

void Tienda::mostrarClientes() {
    cout << "\nClientes registrados:\n";
    for (Cliente &c : clientes) {
        c.mostrarInfo();
    }
}

void Tienda::registrarVenta(int idCliente, int idProducto, int cantidad) {
    Cliente *cliente = nullptr;
    Producto *producto = nullptr;

    for (Cliente &c : clientes) {
        if (c.getId() == idCliente) {
            cliente = &c;
            break;
        }
    }

    for (Producto &p : productos) {
        if (p.getId() == idProducto) {
            producto = &p;
            break;
        }
    }

    if (cliente && producto && producto->getCantidad() >= cantidad) {
        Venta nuevaVenta(idVenta++, *cliente);
        nuevaVenta.agregarProductoVendido(*producto, cantidad);
        producto->descontarStock(cantidad);
        ventas.push_back(nuevaVenta);
        cout << "Venta registrada!\n";
    } else {
        cout << "Error: Cliente o producto no encontrado, o stock insuficiente.\n";
    }
}

void Tienda::mostrarVentas() {
    cout << "\nHistorial de ventas:\n";
    for (Venta &v : ventas) {
        v.mostrarDetalleVenta();
    }
}


