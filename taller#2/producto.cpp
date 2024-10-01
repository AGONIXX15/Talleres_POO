#include <iostream>
#include "producto.h"
#include "vector_producto.h"
using namespace std;

// clase producto

producto::producto(){};

void producto::set_info(){
    cout << "Ingrese el nombre del producto: ";
    cin >> nombre;
    cout << "Ingrese la cantidad del producto: ";
    cin >> cantidad;
    cout << "Ingrese el precio del producto: ";
    cin >> precio;
}



void producto::mostrar_info(){
    cout << "Nombre: " << nombre << endl;
    cout << "Cantidad: " << cantidad << endl;
    cout << "Precio: " << precio << endl;
}



void producto::hola(){
    cout << "Hola" << endl;
}   