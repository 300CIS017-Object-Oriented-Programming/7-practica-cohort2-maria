#ifndef CLIENTE_H
#define CLIENTE_H

#include <iostream>
using namespace std;

class Cliente {
private:
    int id;
    string nombre;

public:
    Cliente(int _id, string _nombre);
    int getId();
    string getNombre();
    void mostrarInfo();
};

#endif