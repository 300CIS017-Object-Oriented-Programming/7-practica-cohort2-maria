#include <iostream>
#include "src/Tienda.h"

using std::cin;
using std::cout;
using std::string;

int main() {
   Tienda tienda;
    int opcion, id, cantidad;
    string nombre;
    float precio;

    do {
        cout << "\nMenu Tienda:\n";
        cout << "1. Agregar producto\n";
        cout << "2. Mostrar productos\n";
        cout << "3. Registrar Cliente\n";
        cout << "4. Salir\n";
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
                tienda.mostrarProductos();
            break;
            case 3:
                cout << "ID: "; cin >> id;
            cin.ignore();
            cout << "Nombre: "; getline(cin, nombre);
            tienda.registrarCliente(id, nombre);
            break;


        }
    } while (opcion != 3);

    return 0;
}// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.