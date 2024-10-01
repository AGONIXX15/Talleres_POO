#include "../include/Camion_basura.h" 
#include <ctime>



Camion_basura::Camion_basura(){}

void Camion_basura::triturar_basura()
{
	std::cout << "Triturando la basura..." << std::endl;
}

void Camion_basura::set_trituradora()
{
	std::string trituradora;
	std::cout << "ingrese la trituradora de su camion " << std::endl;
	std::getline(std::cin,trituradora);
	this->trituradora = trituradora;
}

void Camion_basura::set_info()
{
	Camion::set_info();
	set_trituradora();
}




std::ostream& operator<<(std::ostream& os,const Camion_basura& obj)
{
	os << static_cast<const Camion&>(obj);
	os << "trituradora: " << obj.trituradora << std::endl;
	return os;
}
