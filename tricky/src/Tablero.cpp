#include "../include/Tablero.h"



Tablero::Tablero()
{
	this->turno = 0;
	inicializar_arr();
}

//incializa el arreglo con espacios vacios
void Tablero::inicializar_arr()
{
	for(int i = 0; i < 3; ++i)
	{
		for(int j = 0; j < 3; ++j)
		{
			this->arr[i][j] = ' ';
		}
	}
}


bool Tablero::comprobar()
{
	if (this->size == 9)
		return "Ha sido un empate";
	std::string ganador1 = "El jugador 1 ha ganado";
	std::string ganador2 = "El jugador 2 ha ganado";
	int contador_1cols,contador_1rows = 0;
	int contador_2cols,contador_2rows = 0;
	
	// contador de columnas para verificar quien gano
	for(int i = 0; i < 3; ++i)
	{
		for(int j = 0; j < 3; ++j)
		{
			contador_1cols += (this->arr[i][j] == 'X') ? 1 : 0;
			contador_1rows += (this->arr[j][i] == 'X') ? 1 : 0;
			contador_2cols += (this->arr[i][j] == 'O') ? 1 : 0;
			contador_2rows += (this->arr[j][i] == 'O') ? 1 : 0;
		}
		if (contador_1cols == 3 || contador_1rows == 3)
		{
			this->ganador = true;
			return false;
		}
		else if (contador_2cols == 3 || contador_2rows == 3)
		{
			this->ganador = false;
			return false;
		}
	}
	int diagonal_1main,diagonal_1sec = 0;
	int diagonal_2main,diagonal_2sec = 0;

	for(int i = 0; i < 3; ++i)
	{
		diagonal_1main += (this->arr[0][0+i] == 'X') ? 1 : 0;
		diagonal_1sec += (this->arr[0][2-i] == 'X') ? 1 : 0;
		diagonal_2main += (this->arr[0][0+i] == 'O') ? 1 : 0;
		diagonal_2sec += (this->arr[0][2-i] == 'O') ? 1 : 0;
		if (diagonal_1main == 3 || diagonal_1sec == 3)
		{
		
			this->ganador = true;
			return false;
		}else if (diagonal_2main == 3 || diagonal_2sec == 3)
		{
			this->ganador = false;
			return false;
		}
	}
	return true;
}

// avanzar un turno
void Tablero::avanzar_turno()
{
	this->turno += 1;
}


void Tablero::llenar_tablero()
{
	if ( turno % 2 == 0)
		std::cout << "Jugador 1 Es tu turno" << std::endl;
	else 
		std::cout << "Jugador 2 es tu turno" << std::endl;
	int col,row;
	std::cout << "ingrese la fila" << std::endl;
	std::cin >> row;
	std::cin.ignore();
	std::cout << "ingrese la columna" << std::endl;
	std::cin >> col;
	std::cin.ignore();
	this->arr[row][col] = (turno % 2 == 0 && this->arr[row][col] == ' ') ? 'X' : 'O';
	avanzar_turno();
}

void Tablero::mostrar_tablero()
{
	std::cout << "  0 1 2" << std::endl;
    for (int i = 0; i < 3; ++i) {
        std::cout << i << " ";
        for (int j = 0; j < 3; ++j) {
            std::cout << this->arr[i][j];
            if (j < 2) std::cout << "|";
        }
        std::cout << std::endl;
        if (i < 2) std::cout << "  -----" << std::endl;
    }
}

void Tablero::jugar()
{
	do 
	{
	system("clear");
	mostrar_tablero();
	llenar_tablero();
	}while(comprobar() == true);
	mostrar_tablero();
	(ganador) ? std::cout << "jugador 1 gano" << std::endl : std::cout << "jugador 2 gano" << std::endl;

}

void Tablero::menu()
{
	int opc;
	do 
	{

		std::cout << "bienvenido al menu" << std::endl;
		std::cout << "1. Jugar" << std::endl;
		std::cout << "2. salir" << std::endl;
		std::cin >> opc;
		std::cin.ignore();
		switch (opc)
		{
			case 1:
				this->jugar();
				break;
			case 2:
				std::cout << "saliendo" << std::endl;
				break;
			default:
				std::cout << "ingrese alguna opcion de las anteriores" << std::endl;
				

		}
	}while(opc != 2);

}

	
