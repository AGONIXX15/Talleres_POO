#include "../include/Menu.h"
#include "../include/Vector_producto.h"
#include <iostream>

Menu::Menu() {}

void Menu::menu_compra() {
  int opc;
  do {
    std::cout << "1.escoger un producto" << std::endl;
    std::cout << "0. salir" << std::endl;
    std::cout << "ingrese una opcion para continuar: ";
    std::cin >> opc;
    std::cin.ignore();
    switch (opc) {
    case 1: {
        int id_producto_cliente;
      int contador = 1;
      for (auto i : Vector_producto::productos) {
        std::cout << contador << std::endl;
        i.mostrar_info();
        contador++;
      }
    }
    }
  } while (opc != 0);
}
