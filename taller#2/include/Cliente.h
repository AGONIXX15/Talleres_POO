#ifndef CLIENTE_H
#define CLIENTE_H

#include "Persona.h"
/* clase cliente la cual hereda de persona
 * esta en el programa se usa para la gestion
 * de los clientes dentro del sistema */
class Cliente : public Persona {
public:
  Cliente(); // constructor
  void set_dinero(); // establecer dinero
  void set_dinero(float& dinero); // establecer dinero con parámetro
  void set_id(); // establecer id
  void comprar(); // comprar productos
  void set_info() override; // establecer información
  void mostrar_info() override; // mostrar información

  bool operator<(const Cliente &other); // sobrecarga de operador
  bool operator<(const int &) const; // sobrecarga de operador <
  bool operator==(const Cliente &other) const; // sobrecarga de operador ==
  bool operator==(const int &) const; // sobrecarga de operador ==

  float dinero; // dinero del cliente
  int id; // id del cliente
  static int global_id; // id global
};

#endif
