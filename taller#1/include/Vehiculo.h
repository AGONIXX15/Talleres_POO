#ifndef VEHICULO_H
#define VEHICULO_H
#include <iostream>
#include <string>

class Vehiculo {
public:
  Vehiculo();
  Vehiculo(std::string brand, std::string model, int sits, int year);

  void acelerar();

  void frenar();
  void set_brand();
  void set_model();
  void set_year();
  void set_sits();
  virtual void set_info() ;

  friend std::ostream &operator<<(std::ostream &os, const Vehiculo &v);

  std::string brand;
  std::string model;
  int year;
  int sits;
};

#endif // VEHICULO_H
