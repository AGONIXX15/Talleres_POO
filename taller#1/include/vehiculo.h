#ifndef VEHICULO_H
#define VEHICULO_H
#include <iostream>
#include <string>

class Vehiculo 
{
public:
  Vehiculo(std::string Brand, std::string Model,int Sits, int Year);

	void acelerar();

 	void frenar();
	
  friend std::ostream &operator<<(std::ostream &os, const Vehiculo &v);

  std::string Brand;
  std::string Model;
  int Year;
	int Sits;

};

#endif // VEHICULO_H
