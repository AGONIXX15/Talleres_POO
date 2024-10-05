#include <iostream>
#include "producto.h"
#include "vector_producto.h"

using namespace std;

// clase producto

producto::producto(){

};

void producto::set_nombre(){
    string nombre;
    cout << "Ingrese el nombre del producto: ";
    cin >> nombre;
    this->nombre = nombre;

}

void producto::set_cantidad(){
    int cantidad;
    cout << "Ingrese la cantidad del producto: ";
    cin>>cantidad;
    cin.ignore();
    this->cantidad  = cantidad;

}

void  producto::set_precio(){
    int  precio;
    cout<< "Ingrese el precio del producto: ";
    cin>>precio;
    cin.ignore();
    this->precio = precio;  



}



void producto::set_info(){
    set_nombre();
    set_cantidad();
    set_precio();
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


int producto::get_id(){
    return id;
}

