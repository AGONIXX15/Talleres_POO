#include <iostream>
using namespace std;
#ifndef PRODUCTO_H
#define PRODUCTO_H

class producto{
    public:
    string nombre;
    int cantidad;
    float precio;
    producto();
    

    void hola();
    void set_info();
    void mostrar_info();    
    

};

#endif