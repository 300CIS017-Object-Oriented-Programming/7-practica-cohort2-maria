#include <iostream>
#include "Tienda.h"

using std::cin;
using std::cout;
using std::string;

void mostrarMenu() {
    int opcTienda = 0;
    cout << "Menu de Tienda ... \n";
    cout << "1. Registrar nuevos productos\n";
    cout << "2. Buscar producto\n";
    cout << "3. Mostrar lista de productos\n";
    cout << "4. Registrar Ventas \n";
    cout << "5. Mostrar Ventas \n";
    cout << "6. Registrar Cliente\n";
    cout << "7. Buscar Cliente \n";
    cout << "8. Actualizar cantidades en stock \n";

    cin >> opcTienda;
    int idProducto;
    switch (opcTienda) {
        case 1:
            cout << "Entre com o nome do produto: ";
    }
}

