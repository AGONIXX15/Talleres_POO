#ifndef VEHICULO_H
#define VEHICULO_H
#include <iostream>
#include <string>

class Vehiculo 
{
public:
  Vehiculo(std::string, std::string, int);

	void acelerar();

 void frenar();
	
  friend std::ostream &operator<<(std::ostream &os, const Vehiculo &v);


  std::string Marca;
  std::string Modelo;
  int Year;
};

#endif // VEHICULO_H
