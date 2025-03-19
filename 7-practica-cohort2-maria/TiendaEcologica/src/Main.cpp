#include "Tienda.h"

int main() {
    Tienda tienda;
    int opcion, id, cantidad;
    string nombre;
    float precio;

    do {
        cout << "\nMenú Tienda:\n";
        cout << "1. Agregar producto\n";
        cout << "2. Mostrar productos\n";
        cout << "3. Salir\n";
        cout << "Seleccione una opción: ";
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
                tienda.mostrarProductos();
            break;
        }
    } while (opcion != 3);

    return 0;
}


