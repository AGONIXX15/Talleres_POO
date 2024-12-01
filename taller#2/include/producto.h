#include <iostream>
using namespace std;
#ifndef PRODUCTO_H
#define PRODUCTO_H

class producto{
    public:
    string nombre; // nombre del producto
    int cantidad; // cantidad de producto en stock
    float precio; // precio del producto
    int id=0;   // id del producto
    producto(); // constructor
    
    void set_nombre(); // asignar nombre al producto
    void set_cantidad(); // asignar cantidad al producto
    void set_precio(); // asignar precio al producto
		void aumentar_cantidad(); // aumentar cantidad de producto
		void dismunir_cantidad(); // disminuir cantidad de producto
    void set_info(); // asignar nombre, cantidad y precio al producto
    void mostrar_info(); // mostrar nombre, cantidad y precio del producto
    void id_producto();  // asignar id al producto
    int get_id() const; // obtener id del producto
    

};

#endif
