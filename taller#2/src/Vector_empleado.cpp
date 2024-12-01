#include "../include/Vector_empleado.h" 
#include "../include/Funciones.h"




Vector_empleado::Vector_empleado(){}

void Vector_empleado::crear()
{
	Empleado obj;
	obj.set_info();
	this->vector.push_back(obj);
	return;
}

void Vector_empleado::eliminar()
{
	int id;
	std::cout << "ingrese el id del empleado que va a eliminar" << std::endl;
	std::cin >> id; 
	std::cin.ignore();
	int resultado = busqueda_binaria(this->vector,id);
	if (resultado != -1)
	{
		this->vector.erase(vector.begin() + resultado);
		std::cout << "se ha eliminado con exito el empleado" << std::endl;
	}else 
		std::cout << "no se encontro el empleado a eliminar" << std::endl;
}

void Vector_empleado::eliminar(const int& id)
{
	int resultado = busqueda_binaria(this->vector,id);
	if (resultado != -1)
	{
		this->vector.erase(vector.begin() + resultado);
		std::cout << "se ha eliminado con exito el empleado" << std::endl;
	}else 
		std::cout << "no se encontro el empleado a eliminar" << std::endl;
}

//actualizar a el empleado
void Vector_empleado::actualizar()
{
	int id;
	std::cout << "ingrese el id del empleado que desea actualizar" << std::endl;
	std::cin >> id;
	std::cin.ignore();	
	int resultado = busqueda_binaria(this->vector,id);
	if(resultado != -1)
	{
		std::cout << "se encontro el empleado a actualizar" << std::endl;
		this->vector[resultado].set_nombre();
		this->vector[resultado].set_edad();
		this->vector[resultado].set_fecha();
		this->vector[resultado].set_horario();
		this->vector[resultado].set_salario();
	}
	else 
	{
		std::cout << "no se encontro el empleado a actualizar" << std::endl;
	}
}

// no actualizar al empleado
void Vector_empleado::actualizar(const int& id)
{

	int resultado = busqueda_binaria(this->vector,id);
	if(resultado != -1)
	{
		std::cout << "se encontro el empleado a actualizar" << std::endl;
		this->vector[resultado].set_nombre();
		this->vector[resultado].set_edad();
		this->vector[resultado].set_fecha();
		this->vector[resultado].set_horario();
		this->vector[resultado].set_salario();
	}
	else 
	{
		std::cout << "no se encontro el empleado a actualizar" << std::endl;
	}
}


void Vector_empleado::leer()
{
	for(auto i : this->vector)
	{
		i.mostrar_info();
	}
}


void Vector_empleado::menu_empleados(){
  int opc;
	Vector_empleado obj;
  do{
    
    
    std::cout<<"1. ingresar empleado al sistema"<<std::endl;
    std::cout<<"2. eliminar empleado"<<std::endl;
    std::cout<<"3. actualizar empleado"<<std::endl;
	std::cout<<"4. mostrar empleados"<<std::endl;
	std::cout<<"5.acciones empleado"<<std::endl;
	std::cout<<"0. salir"<<std::endl;
    std::cout<<"ingrese una opcion para continuar: ";
    std::cin>>opc;
    std::cin.ignore();

    switch(opc){
      case 1:
        obj.crear();
        break;
      case 2:
        obj.eliminar();
        break;
      case 3:
        obj.actualizar();
        break;
      case 4:
       obj.leer();
        break;
      
      case 5:
	  // vas al menu de empleados de la clase 
        Empleado::menu_empleados();
        break;
	case 0:
		std::cout<<"saliendo del menu de empleados"<<std::endl;
      default:
        std::cout<<"opcion no valida"<<std::endl;
        break;

    }
    

  }
  while(opc!=0);

}