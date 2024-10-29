#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
#include <string>

/* clase que se utiliza como base para otras
 * esta en ningun caso debe usarse para el programa*/
class Persona {
public:
  Persona(); // constructor de la clase

  void set_nombre();           // setea el nombre del persona
  void set_fecha();            // setea la fecha de nacimiento del persona
  void set_edad();             // setea la edad del persona
  virtual void set_info();     // setea la informacion del persona
  virtual void mostrar_info(); // muestra la informacion del persona

  std::string nombre; // nombre de la persona
  std::string fecha;  // fecha de nacimiento de la persona
  int edad;           // edad de la persona
};

#endif
