#include "src/Tienda.h"
#include "src/Cliente.h"
#include "src/Cliente.h"

int main() {
    Tienda tienda;
    int opcion, id, cantidad;
    string nombre;
    float precio;

    do {
        cout << "\nMenu Tienda:\n";
        cout << "1. Agregar producto\n";
        cout << "2. Registrar cliente\n";
        cout << "3. Realizar venta\n";
        cout << "4. Mostrar productos\n";
        cout << "5. Mostrar clientes\n";
        cout << "6. Mostrar ventas\n";
        cout << "7. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "ID: "; cin >> id;
            cin.ignore();
            cout << "Nombre: "; getline(cin, nombre);
            cout << "Precio: "; cin >> precio;
            cout << "Cantidad: "; cin >> cantidad;
            tienda.registrarProducto(id, nombre, precio, cantidad);
            break;
            case 2:
                cout << "ID Cliente: "; cin >> id;
            cin.ignore();
            cout << "Nombre: "; getline(cin, nombre);
            tienda.registrarCliente(id, nombre);
            break;
            case 3:
                int idCliente, idProducto, cantidadVenta;
            cout << "ID Cliente: "; cin >> idCliente;
            cout << "ID Producto: "; cin >> idProducto;
            cout << "Cantidad: "; cin >> cantidadVenta;
            tienda.registrarVenta(idCliente, idProducto, cantidadVenta);
            break;
            case 4: tienda.mostrarProductos(); break;
            case 5: tienda.mostrarClientes(); break;
            case 6: tienda.mostrarVentas(); break;
        }
    } while (opcion != 7);

    return 0;
}