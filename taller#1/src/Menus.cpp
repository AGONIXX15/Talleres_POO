#include <Menus.h>
#include <Camion.h>
#include <Convertible.h>
#include <Vehiculo.h>
#include <Auto.h>
#include <Bicicleta.h>
#include <Deportivo.h>
#include <Mula.h>
#include <Camion_basura.h>
#include <Motocicleta.h>
#include <Scooter.h>
#include <iostream>


void menu()
{
	int opc;
	do 
	{
		std::cout << "Bienvenido al menu de opciones" << std::endl;
		std::cout << "1. acceder a Vehiculo" << std::endl;
		std::cout << "2. acceder a Auto" << std::endl;
		std::cout << "3. acceder a Deportivo" << std::endl;
		std::cout << "4. acceder a Convertible" << std::endl;
		std::cout << "5. acceder a Motocicleta" << std::endl;
		std::cout << "6. acceder a Bicicleta" << std::endl;
		std::cout << "7. acceder a Scooter" << std::endl;
		std::cout << "8. acceder a Camion" << std::endl;
		std::cout << "9. acceder a mula" << std::endl;
		std::cout << "10. acceder a Camion de la basura" << std::endl;
		std::cout << "11. Salir...." << std::endl;
		std::cout << "Ingrese alguna de las anteriores opciones" << std::endl;
		std::cin >> opc;
		std::cin.ignore();
		
		switch(opc)
		{
			case 1:
				menu_vehiculo();
				break;
			case 2:
				menu_auto();
				break;
			case 3:
				menu_deportivo();
				break;
			case 4:
				menu_convertible();
				break;
			case 5:
				menu_motocicleta();
				break;
			case 6:
				menu_bicicleta();
				break;
			case 7:
				menu_scooter();
				break;
			case 8:
				menu_camion();
				break;
			case 9:
				menu_mula();
				break;
			case 10:
				menu_camion_basura();
				break;
			case 11:
				std::cout << "Saliendo..." << std::endl;
				break;
			default:
				std::cout << "Error ingrese alguna de las anteriores opciones" << std::endl;

		}

	}while(opc != 11);
}

void menu_vehiculo()
{
	Vehiculo* obj = new Vehiculo();
	obj->set_info();
	int opc;
	do 
	{
		std::cout << "Bienvenido al menu de opciones de vehiculo" << std::endl;
		std::cout << "1. Acelerar" << std::endl;
		std::cout << "2. Frenar" << std::endl;
		std::cout << "3. Saliendo" << std::endl;
		std::cout << "Ingrese alguna de las anteriores opciones" << std::endl;
		std::cin >> opc;
		std::cin.ignore();
		switch(opc)
		{
			case 1:
				obj->acelerar();
				break;
			case 2:
				obj->frenar();
				break;
			case 3:
				std::cout << " Destruyendo objeto..." << std::endl;
				delete obj;
				break;
			default:
				std::cout << "Error ingrese alguna de las posibles opciones" << std::endl;
			
		}
	}while(opc != 3);
	return;
}

void menu_auto()
{
	Auto* obj = new Auto;
	obj->set_info();
	int opc;
	do 
	{
		std::cout << "Bienvenido al menu de opciones del auto" << std::endl;
		std::cout << "1. Acelerar" << std::endl;
		std::cout << "2. Frenar" << std::endl;
		std::cout << "3. Manejar" << std::endl;
		std::cout << "4. Abrir maletero" << std::endl;
		std::cout << "5. Cerrar maletero" << std::endl;
		std::cout << "6. abrir puerta" << std::endl;
		std::cout << "7. Cerrar puerta" << std::endl;
		std::cout << "8. prender luces" << std::endl;
		std::cout << "9. apagar luces" << std::endl;
		std::cout << "10. ajustar asiento" << std::endl;
		std::cout << "11. kilometraje" << std::endl;
		std::cout << "12. llenar combustible" << std::endl;
		std::cout << "13. salir... " << std::endl;
		std::cout << "ingrese alguna de las anteriores opciones" << std::endl;
		std::cin >> opc;
		std::cin.ignore();
		switch (opc)
		{
			case 1:
				obj->acelerar();
				break;
			case 2:
				obj->frenar();
				break;
			case 3:
				obj->manejar();
				break;
			case 4:
				obj->abrir_maletero();
				break;
			case 5:
				obj->cerrar_maletero();
				break;
			case 6:
				obj->abrir_puerta();
				break;
			case 7:
				obj->cerrar_puerta();
				break;
			case 8:
				obj->prender_luces();
				break;
			case 9:
				obj->apagar_luces();
				break;
			case 10:
				obj->ajustar_asiento();
				break;
			case 11:
				obj->kilometraje();
					break;
			case 12:
					obj->llenar_combustible();
					break;
			case 13:
					std::cout << "Saliendo ..." << std::endl;
					delete obj;
					break;
			default:
					std::cout << "elija alguna de las opciones disponibles" << std::endl;
		}
	}while(opc != 13);
	return;
}

void menu_deportivo()
{
	Deportivo* obj = new Deportivo;
	obj->set_info();
	int opc;
	do 
	{
		std::cout << "Bienvenido al menu de opciones del auto" << std::endl;
		std::cout << "1. Acelerar" << std::endl;
		std::cout << "2. Frenar" << std::endl;
		std::cout << "3. Manejar" << std::endl;
		std::cout << "4. Abrir maletero" << std::endl;
		std::cout << "5. Cerrar maletero" << std::endl;
		std::cout << "6. abrir puerta" << std::endl;
		std::cout << "7. Cerrar puerta" << std::endl;
		std::cout << "8. prender luces" << std::endl;
		std::cout << "9. apagar luces" << std::endl;
		std::cout << "10. ajustar asiento" << std::endl;
		std::cout << "11. kilometraje" << std::endl;
		std::cout << "12. llenar combustible" << std::endl;
		std::cout << "13. aplicar nitro " << std::endl;
		std::cout << "14. aplicar turbo" << std::endl;
		std::cout << "15. Salir" << std::endl;
		std::cout << "ingrese alguna de las anteriores opciones" << std::endl;
		std::cin >> opc;
		std::cin.ignore();
		switch (opc)
		{
			case 1:
				obj->acelerar();
				break;
			case 2:
				obj->frenar();
				break;
			case 3:
				obj->manejar();
				break;
			case 4:
				obj->abrir_maletero();
				break;
			case 5:
				obj->cerrar_maletero();
				break;
			case 6:
				obj->abrir_puerta();
				break;
			case 7:
				obj->cerrar_puerta();
				break;
			case 8:
				obj->prender_luces();
				break;
			case 9:
				obj->apagar_luces();
				break;
			case 10:
				obj->ajustar_asiento();
				break;
			case 11:
				obj->kilometraje();
					break;
			case 12:
					obj->llenar_combustible();
					break;
			case 13:
					obj->aplicar_nitro();
					break;
			case 14:
					obj->aplicar_turbo();
					break;
			case 15:
					std::cout << "Saliendo ..." << std::endl;
					delete obj;
					break;
			default:
					std::cout << "elija alguna de las opciones disponibles" << std::endl;
		}
	}while(opc != 15);
	return;
}

void menu_convertible()
{
	Convertible* obj = new Convertible;
	obj->set_info();
	int opc;
	do 
	{
		std::cout << "Bienvenido al menu de opciones del auto" << std::endl;
		std::cout << "1. Acelerar" << std::endl;
		std::cout << "2. Frenar" << std::endl;
		std::cout << "3. Manejar" << std::endl;
		std::cout << "4. Abrir maletero" << std::endl;
		std::cout << "5. Cerrar maletero" << std::endl;
		std::cout << "6. abrir puerta" << std::endl;
		std::cout << "7. Cerrar puerta" << std::endl;
		std::cout << "8. prender luces" << std::endl;
		std::cout << "9. apagar luces" << std::endl;
		std::cout << "10. ajustar asiento" << std::endl;
		std::cout << "11. kilometraje" << std::endl;
		std::cout << "12. llenar combustible" << std::endl;
		std::cout << "13. bajar techo" << std::endl;
		std::cout << "14. subir techo" << std::endl;
		std::cout << "15. Salir" << std::endl;
		std::cout << "ingrese alguna de las anteriores opciones" << std::endl;
		std::cin >> opc;
		std::cin.ignore();
		switch (opc)
		{
			case 1:
				obj->acelerar();
				break;
			case 2:
				obj->frenar();
				break;
			case 3:
				obj->manejar();
				break;
			case 4:
				obj->abrir_maletero();
				break;
			case 5:
				obj->cerrar_maletero();
				break;
			case 6:
				obj->abrir_puerta();
				break;
			case 7:
				obj->cerrar_puerta();
				break;
			case 8:
				obj->prender_luces();
				break;
			case 9:
				obj->apagar_luces();
				break;
			case 10:
				obj->ajustar_asiento();
				break;
			case 11:
				obj->kilometraje();
					break;
			case 12:
					obj->llenar_combustible();
					break;
			case 13:
					obj->bajar_techo();
					break;
			case 14:
					obj->subir_techo();
					break;
			case 15:
					std::cout << "Saliendo ..." << std::endl;
					delete obj;
					break;
			default:
					std::cout << "elija alguna de las opciones disponibles" << std::endl;
		}
	}while(opc != 15);
	return;
}

void menu_motocicleta()
{
	Motocicleta* obj = new Motocicleta();
	obj->set_info();
	int opc;
		do 
	{
		std::cout << "Bienvenido al menu de opciones de Motocicleta" << std::endl;
		std::cout << "1. Acelerar" << std::endl;
		std::cout << "2. Frenar" << std::endl;
		std::cout << "3. hacer caballito" << std::endl;
		std::cout << "4. balanceo" << std::endl;
		std::cout << "5. Saliendo" << std::endl;
		std::cout << "Ingrese alguna de las anteriores opciones" << std::endl;
		std::cin >> opc;
		std::cin.ignore();
		switch(opc)
		{
			case 1:
				obj->acelerar();
				break;
			case 2:
				obj->frenar();
				break;
			case 3:
				obj->hacer_caballito();
				break;
			case 4:
				obj->balanceo();
				break;
			case 5:
				std::cout << " Destruyendo Motocicleta..." << std::endl;
				delete obj;
				break;
			default:
				std::cout << "Error ingrese alguna de las posibles opciones" << std::endl;
			
		}
	}while(opc != 5);
	return;

}

void menu_bicicleta()
{
	Bicicleta* obj = new Bicicleta();
	obj->set_info();
	int opc;
		do 
	{
		std::cout << "Bienvenido al menu de opciones de Bicicleta" << std::endl;
		std::cout << "1. Pedalear" << std::endl;
		std::cout << "2. Frenar" << std::endl;
		std::cout << "3. hacer caballito" << std::endl;
		std::cout << "4. balanceo" << std::endl;
		std::cout << "5. sonar timbre" << std::endl;
		std::cout << "6. cambios" << std::endl;
		std::cout << "7. Saliendo" << std::endl;
		std::cout << "Ingrese alguna de las anteriores opciones" << std::endl;
		std::cin >> opc;
		std::cin.ignore();
		switch(opc)
		{
			case 1:
				obj->pedalear();
				break;
			case 2:
				obj->frenar();
				break;
			case 3:
				obj->hacer_caballito();
				break;
			case 4:
				obj->balanceo();
				break;
			case 5:
				obj->sonar_timbre();
				break;
			case 6:
				obj->cambios();
				break;
			case 7:
				std::cout << " Destruyendo Bicicleta..." << std::endl;
				delete obj;
				break;
			default:
				std::cout << "Error ingrese alguna de las posibles opciones" << std::endl;
			
		}
	}while(opc != 7);
	return;
}

void menu_scooter()
{
	Scooter* obj = new Scooter();
	obj->set_info();
	int opc;
		do 
	{
		std::cout << "Bienvenido al menu de opciones de Scooter" << std::endl;
		std::cout << "1. Acelerar" << std::endl;
		std::cout << "2. Frenar" << std::endl;
		std::cout << "3. hacer caballito" << std::endl;
		std::cout << "4. balanceo" << std::endl;
		std::cout << "5. Recargar" << std::endl;
		std::cout << "6. Saliendo" << std::endl;
		std::cout << "Ingrese alguna de las anteriores opciones" << std::endl;
		std::cin >> opc;
		std::cin.ignore();
		switch(opc)
		{
			case 1:
				obj->acelerar();
				break;
			case 2:
				obj->frenar();
				break;
			case 3:
				obj->hacer_caballito();
				break;
			case 4:
				obj->balanceo();
				break;
			case 5:
				obj->recargar();
				break;
			case 6:
				std::cout << " Destruyendo Scooter..." << std::endl;
				delete obj;
				break;
			default:
				std::cout << "Error ingrese alguna de las posibles opciones" << std::endl;
			
		}
	}while(opc != 5);
	return;


}

void menu_camion()
{
	Camion* obj = new Camion();
	obj->set_info();
	int opc;
	do 
	{
		std::cout << "Bienvenido al menu de camion" << std::endl;
		std::cout << "1. Cargar cargamento" << std::endl;
		std::cout << "2. Descargar cargamento" << std::endl;
		std::cout << "3. llenar combustible" << std::endl;
		std::cout << "4. salir..." << std::endl;
		std::cout << "ingrese alguna de las anteriores opciones" << std::endl;
		std::cin >> opc;
		std::cin.ignore();
		switch (opc)
		{
			case 1:
				obj->cargar_cargamento();
				break;
			case 2:
				obj->descargar_cargamento();
				break;
			case 3:
				obj->llenar_combustible();
				break;
			case 4:
				std::cout << "Destruyendo el camion..." << std::endl;
				delete obj;
				break;
			default:
				std::cout << "Error elije alguna opcion valida de las anteriores" << std::endl;

		}
	}while(opc != 4);
	return;
}

void menu_mula()
{
	Mula* obj = new Mula();
	obj->set_info();
	int opc;
	do 
	{
		std::cout << "Bienvenido al menu de camion" << std::endl;
		std::cout << "1. Cargar cargamento" << std::endl;
		std::cout << "2. Descargar cargamento" << std::endl;
		std::cout << "3. llenar combustible" << std::endl;
		std::cout << "4. acoplar ejes" << std::endl;
		std::cout << "5. desacoplar ejes" << std::endl;
		std::cout << "6. salir..." << std::endl;
		std::cout << "ingrese alguna de las anteriores opciones" << std::endl;
		std::cin >> opc;
		std::cin.ignore();
		switch (opc)
		{
			case 1:
				obj->cargar_cargamento();
				break;
			case 2:
				obj->descargar_cargamento();
				break;
			case 3:
				obj->llenar_combustible();
				break;
			case 4:
				obj->acoplar_ejes();
				break;
			case 5:
				obj->desacoplar_ejes();
				break;
			case 6:
				std::cout << "Destruyendo el camion..." << std::endl;
				delete obj;
				break;
			default:
				std::cout << "Error elije alguna opcion valida de las anteriores" << std::endl;

		}
	}while(opc != 4);
	return;
}

void menu_camion_basura()
{
	Camion_basura* obj = new Camion_basura();
	obj->set_info();
	int opc;
	do 
	{
		std::cout << "Bienvenido al menu de camion" << std::endl;
		std::cout << "1. Cargar cargamento" << std::endl;
		std::cout << "2. Descargar cargamento" << std::endl;
		std::cout << "3. llenar combustible" << std::endl;
		std::cout << "4. triturar basura" << std::endl;
		std::cout << "5. salir..." << std::endl;
		std::cout << "ingrese alguna de las anteriores opciones" << std::endl;
		std::cin >> opc;
		std::cin.ignore();
		switch (opc)
		{
			case 1:
				obj->cargar_cargamento();
				break;
			case 2:
				obj->descargar_cargamento();
				break;
			case 3:
				obj->llenar_combustible();
				break;
			case 4:
				obj->triturar_basura();
				break;
			case 5:
				std::cout << "Destruyendo el camion..." << std::endl;
				delete obj;
				break;
			default:
				std::cout << "Error elije alguna opcion valida de las anteriores" << std::endl;

		}
	}while(opc != 4);
	return;
}
