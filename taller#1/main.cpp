#include "include/vehiculo.h"
#include "include/auto.h"
#include <iostream>


int main()
{
 Auto obj("nissan","volador",2024,5);
		std::cout << obj << std::endl;
		obj.abrir_maletero();
		obj.acelerar();
		obj.frenar();
	return 0;
}
