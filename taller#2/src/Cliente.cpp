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
  // implementar de manera correcta este metodo :)
  std::cout << "comprando bby..." << std::endl;
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

void Cliente::menu_clientes() {
  int opc;
  Cliente obj;
  do{
    std::cout << "1. ingresar valores de incliente" << std::endl;
    std::cout << "2. mostrar informacion del cliente" << std::endl;
    std::cout << "3. realizar compra" << std::endl;
    std::cout << "0. salir" << std::endl;
    std::cin >> opc;
  
  switch(opc){
    case 1:
      obj.set_info();
      break;
    case 2:
      obj.mostrar_info();
      break;
    case 3:
      obj.comprar();
      break;
    case 0:
      std::cout << "saliendo del menu de clientes" << std::endl;
      break;
    default:
      std::cout << "opcion no valida" << std::endl;
      break;
    }
  }while (opc != 0);

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
