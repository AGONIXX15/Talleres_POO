#include "../include/Menu.h"
#include "../include/Empleado.h"
#include "../include/Facturas.h"
#include "../include/Vector_cliente.h"
#include "../include/Vector_empleado.h"
#include "../include/Vector_producto.h"
#include <iostream>

Menu::Menu() {}

void Menu::menu_compra() {
  int opc;
  Facturas factura;
  do {
    std::cout << "1.escoger un producto" << std::endl;
    std::cout << "2. comprar los seleccionados" << std::endl;
    std::cout << "0. salir" << std::endl;
    std::cout << "ingrese una opcion para continuar: ";
    std::cin >> opc;
    std::cin.ignore();
    switch (opc) {

    case 0: {
      std::cout << "saliendo..." << std::endl;
      break;
    }
    case 1: {
      int id_producto_cliente;
      for (auto i : Vector_producto::productos) {
        i.mostrar_info();
      }
      std::cout << "Ingrese algun producto: ";
      std::cin >> id_producto_cliente;
      std::cin.ignore();
      factura.añadir_carrito(
          Vector_producto::productos[id_producto_cliente - 1]);
      break;
    }
    case 2: {
      factura.generar_total();
      std::cout << "esto es lo que debe pagar: ";
      std::cout << factura.total_factura << std::endl;
      float pagar = 0;
      while (pagar < factura.total_factura) {
        std::cout << "ingrese el valor";
        std::cin >> pagar;
        std::cin.ignore();
      }
      std::cout << "su cambio es: " << pagar - factura.total_factura
                << std::endl;
      Menu::ver_factura(factura);
      break;
    }
    }
  } while (opc != 0);
}

void Menu::ver_factura(Facturas f) {
  char c;
  std::cout << "desea ver su factura, ingrese y/n" << std::endl;
  std::cin >> c;
  if (c == 'y') {
    f.generar_factura();
  }
  return;
}

void Menu::menu_productos() {
  cout << "_______menu productos________" << endl;
  Vector_producto::menu_productos();
}

void Menu::menu_empleado() {
  cout << "_______menu empleado________" << endl;
  Vector_empleado::menu_empleados();
}

void Menu::menu_clientes() {
  cout << "_______menu clientes________" << endl;
  Vector_cliente::menu_clientes();
}

// terminar de implementar
void Menu::menu_facturas() {
  std::cout << "______menu facturas______" << std::endl;
}
void Menu::menu_general() {
  int opc;
  do {
    std::cout << "1. menu empleado" << std::endl;
    std::cout << "2. menu productos" << std::endl;
    std::cout << "3. menu clientes" << std::endl;
    std::cout << "0. salir" << std::endl;
    std::cout << "ingrese una opcion para continuar: ";
    std::cin >> opc;
    std::cin.ignore();

    switch (opc) {
    case 1:
      menu_empleado();
      break;
    case 2:
      menu_productos();
      break;
    case 3:
      menu_clientes();
      break;
    case 0:
      std::cout << "saliendo del menu general" << std::endl;
      break;
    default:
      std::cout << "opcion no valida" << std::endl;
      break;
    }
  } while (opc != 0);
}
