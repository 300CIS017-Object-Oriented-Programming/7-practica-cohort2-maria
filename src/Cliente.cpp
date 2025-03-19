#include "Cliente.h"


Cliente::Cliente() : id(0), nombre(""){}


Cliente::Cliente(int id, string nombre)
    : id(id), nombre(nombre){}


void Cliente::mostrarCliente() {
    cout << "ID: " << id  << nombre << endl;
}