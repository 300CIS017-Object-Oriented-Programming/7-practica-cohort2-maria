#include "Venta.h"

Venta::Venta(int _id, Cliente _cliente) : cliente(_cliente) {
    id = _id;
    total = 0;
}

void Venta::agregarProductoVendido(Producto p, int cantidad) {
    productosVendidos.push_back(p);
    total += p.getPrecio() * cantidad;
}

void Venta::mostrarDetalleVenta() {
    cout << "\nVenta ID: " << id << " | Cliente: " << cliente.getNombre() << endl;
    cout << "Productos vendidos:\n";
    for (Producto p : productosVendidos) {
        cout << "- " << p.getNombre() << " | Precio: $" << p.getPrecio() << endl;
    }
    cout << "Total: $" << total << "\n";
}