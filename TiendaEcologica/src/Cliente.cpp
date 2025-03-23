#include "Cliente.h"

Cliente::Cliente(int _id, string _nombre) {
    id = _id;
    nombre = _nombre;
}

int Cliente::getId() { return id; }
string Cliente::getNombre() { return nombre; }

void Cliente::mostrarInfo() {
    cout << "ID Cliente: " << id << " | Nombre: " << nombre << endl;
}