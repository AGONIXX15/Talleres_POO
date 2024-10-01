#include <iostream>
using namespace std;
#ifndef PRODUCTO_H
#define PRODUCTO_H

class producto{
    public:
    string nombre;
    int cantidad;
    float precio;
    int id=0;   
   
    producto();
    

    void set_info();
    void mostrar_info();
    void id_producto();    
    

};

#endif