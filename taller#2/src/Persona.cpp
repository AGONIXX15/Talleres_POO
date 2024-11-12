#include "../include/Persona.h"
#include <regex>

// constructor de la clase persona
Persona::Persona() {}

// setear el nombre de la persona y pide que se ingrese por terminal
void Persona::set_nombre() {
  std::string nombre;
  std::cout << "ingrese su nombre : " << std::endl;
  std::getline(std::cin, nombre);
  this->nombre = nombre;
  return;
}

// setear la fecha de nacimiento de la persona
void Persona::set_fecha() {
	// expresion regular para comprobar que la fecha este en el formato correcto
  std::regex comprobar(R"((0[1-9]|[12][1-9]|3[01])/(0[1-9]|1[0-2])/\d{4})");
	// bucle para que el usuario ingrese la fecha en el formato correcto
  while (true) {
    std::string fecha;
    std::cout << "ingrese su fecha de nacimiento en el formato(dd/mm/yyyy) : "
              << std::endl;
    std::cin >> fecha;
		// si la fecha esta en el formato correcto se asigna a la variable fecha y se sale del bucle
    if (std::regex_match(fecha, comprobar)) {
      this->fecha = fecha;
      break;
    } else {
      std::cout << "la fecha esta mal puesta" << std::endl;
    }
  }
  return;
}

// setear la edad de la persona sin pedir al usuario
void Persona::set_edad() {
  int edad;
  std::cout << "ingrese su edad:" << std::endl;
  std::cin >> edad;
  std::cin.ignore();
  this->edad = edad;
  return;
}

// setear la informacion de la persona
void Persona::set_info() {
  set_nombre();
  set_fecha();
  set_edad();
  return;
}

// mostrar la informacion de la persona
void Persona::mostrar_info() {
  std::cout << "nombre: " << this->nombre << " " << "fecha " << this->fecha
            << " " << "edad: " << this->edad << std::endl;
}
