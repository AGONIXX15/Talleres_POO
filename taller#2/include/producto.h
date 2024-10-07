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
    
    void set_nombre();
    void set_cantidad();
    void set_precio();
    void set_info();
    void mostrar_info();
    void id_producto();   
    int get_id(); 
    

};

#endif