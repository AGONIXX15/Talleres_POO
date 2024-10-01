#include <iostream>
#include "producto.h"
#include "vector_producto.h"
#include <random>
using namespace std;

// clase producto

producto::producto(){

};



void producto::set_info(){
    cout << "Ingrese el nombre del producto: ";
    cin >> nombre;
    cout << "Ingrese la cantidad del producto: ";
    cin >> cantidad;
    cout << "Ingrese el precio del producto: ";
    cin >> precio;
    id_producto();
}



void producto::mostrar_info(){
    cout << "Nombre: " << nombre << endl;
    cout << "Cantidad: " << cantidad << endl;
    cout << "Precio: " << precio << endl;
    cout << "ID: " <<id<< endl;
}

void producto::id_producto(){
    
    this->id =++id;
    cout << "ID: " <<this->id<< endl;
}   


