#ifndef CLIENTE_H
#define CLIENTE_H

#include <iostream>
using namespace std;

class Cliente {
private:
    int id;
    string nombre;


public:
    Cliente();
    Cliente(int id, string nombre);

    void mostrarCliente();
};

#endif