#ifndef TABLERO_H
#define TABLERO_H



#include <iostream>
#include <string>

class Tablero 
{
	public:
		Tablero();
		void inicializar_arr();
		void avanzar_turno();
		void turno_actual();
		void llenar_tablero();
		void mostrar_tablero();
		bool comprobar();
		void jugar();
		void menu();
		char arr[3][3];
		int size;
		int turno;
		bool ganador;


};



#endif

