#include "../include/Cliente.h" 
#include <iostream>
#include <string>


// constructor de la clase cliente
Cliente::Cliente() {}

int Cliente::global_id = 3000;

void Cliente::set_dinero() {
	// pide al usuario que ingrese el dinero del cliente
  float dinero;
  std::cout << "cuanto dinero tiene para pagar?:" << std::endl;
  std::cin >> dinero;
  std::cin.ignore();
  this->dinero = dinero;
  return;
}

void Cliente::set_dinero(float& dinero) {
	// setea el dinero del cliente
  this->dinero = dinero;
  return;
}

void Cliente::set_id() {
	// asigna un id unico a cada cliente
  this->id = global_id++;
  std::cout << "su id es " << this->id << std::endl;
  return;
}

void Cliente::comprar() {
  // implementar comprar para el cliente cuando ya este lo demas
  return;
}

void Cliente::set_info() {
	// llama a la funcion padre (persona)
  Persona::set_info();
	// llama a la funcion para setear el dinero
  set_dinero();
	// llama a la funcion para setear el id
  set_id();
  return;
}

// mostrar informacion acerca de un cliente
void Cliente::mostrar_info() {
	// llama a la funcion padre (persona)  
  Persona::mostrar_info();
	// imprime el dinero del cliente
  std::cout << "dinero : " << this->dinero << std::endl;
  return;
}

// sobrecarga de operador para comparar con otro cliente (<) por id
bool Cliente::operator<(const Cliente &other) { return this->id < other.id; }

// sobrecarga de operador para comparar con un entero (<) por id
bool Cliente::operator<(const int &id) const { return this->id < id; }

// sobrecarga de operador para comparar con otro cliente
bool Cliente::operator==(const Cliente &other) const {
  return this->id == other.id;
}

// sobrecarga de operador para comparar con un entero
bool Cliente::operator==(const int &id) const { return this->id == id; }
