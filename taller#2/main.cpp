#include "include/Vector_empleado.h"
#include <iostream>
#include <cstdlib>

int main()
{
	Vector_empleado v;
	v.crear();
	v.crear();
	std::cout << "leyendo desde v1"<< std::endl;
	v.leer();
	Vector_empleado v1;
	std::cout << "leyendo desde v2"<< std::endl;
	v1.leer();
	return 0;
}
