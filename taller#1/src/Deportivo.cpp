
#include "../include/Deportivo.h"

//constructor vacio
Deportivo::Deportivo(){};

// aplicar nitro metodo
void Deportivo::aplicar_nitro()
{
	std::cout << "aplicando nitro al Deportivo..." << std::endl;
}
//aplicar turbo metodo
void Deportivo::aplicar_turbo()
{
	std::cout << "aplicando turbo al Deportivo..." << std::endl;
}

void Deportivo::set_info()
{
	Auto::set_info();
}

std::ostream& operator<<(std::ostream& os, const Deportivo& obj)
{
	os << static_cast<const Auto&>(obj);
	return os;
}

