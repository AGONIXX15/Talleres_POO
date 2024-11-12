#include "../include/Empleado.h"

Empleado::Empleado() {}

int Empleado::global_id = 1000;

	// imprime que el empleado esta atendiendo
void Empleado::atender() {
  std::cout << this->nombre << " " << "esta atendiendo" << std::endl;
  return;
}

	// imprime que el empleado esta organizando
void Empleado::organizar() {
  std::cout << this->nombre << " " << "esta organizando" << std::endl;
  return;
}

	// pide al usuario que ingrese el salario del empleado
void Empleado::set_salario() {
  float salario;
  std::cout << "ingrese su salario :" << std::endl;
  std::cin >> salario;
  std::cin.ignore();
  this->salario = salario;
  return;
}

// setea el salario del empleado
void Empleado::set_horario() {
  std::string horario;
  std::cout << "ingrese su horario: " << std::endl;
  std::getline(std::cin, horario);
  this->horario = horario;
  return;
}

// asigna un id unico a cada empleado
void Empleado::set_id() {
  this->id = global_id++;
  std::cout << "su id es " << this->id << std::endl;
}

// setea la informacion del empleado
void Empleado::set_info() {
  Persona::set_info();
  set_salario();
  set_horario();
  set_id();
  return;
}

// muestra la informacion del empleado
void Empleado::mostrar_info() {
  Persona::mostrar_info();
  std::cout << "salario: " << this->salario << " "
            << "horario: " << this->horario << " " << "ID: " << this->id
            << std::endl;
  return;
}

// sobrecarga de operador para comparar con otro empleado (<) por id
bool Empleado::operator<(const Empleado &empleado) const {
  return this->id < empleado.id;
}

// sobrecarga de operador para comparar con un entero (<) por id
bool Empleado::operator<(const int &id) const { return this->id < id; }

// sobrecarga de operador para comparar con otro empleado
bool Empleado::operator==(const Empleado &empleado) const {
  return this->id == empleado.id;
}

// sobrecarga de operador para comparar con un entero
bool Empleado::operator==(const int &id) const { return this->id == id; }
