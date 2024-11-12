#include "../include/producto.h"
#include "../include/Vector_producto.h"
#include <iostream>

// clase producto

producto::producto() {};

// setear el nombre del producto
void producto::set_nombre() {
  string nombre;
  std::cout << "Ingrese el nombre del producto: ";
  std::cin >> nombre;
  this->nombre = nombre;
}

void producto::set_cantidad() {
  int cantidad;
  std::cout << "Ingrese la cantidad del producto: ";
  std::cin >> cantidad;
  std::cin.ignore();
  this->cantidad = cantidad;
}

void producto::set_precio() {
  int precio;
  std::cout << "Ingrese el precio del producto: ";
  std::cin >> precio;
  std::cin.ignore();
  this->precio = precio;
}

// setear la informacion del producto
void producto::set_info() {
  set_nombre();
  set_cantidad();
  set_precio();
  id_producto();
}

// mostrar la informacion del producto
void producto::mostrar_info() {
	// imprime la informacion del producto
  std::cout << "Nombre: " << nombre << endl;
  std::cout << "Cantidad: " << cantidad << endl;
  std::cout << "Precio: " << precio << endl;
  std::cout << "ID: " << id << endl;
}

// asigna un id unico a cada producto
void producto::id_producto() {
	// preincremento para que se sume antes de asignar el valor
  this->id = ++id;
  std::cout << "ID: " << this->id << endl;
}

int producto::get_id() const { return id; } // retorna el id del producto
