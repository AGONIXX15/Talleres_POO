#include "../include/Menu.h"
#include "../include/Empleado.h"
#include "../include/Facturas.h"
#include "../include/Vector_cliente.h"
#include "../include/Vector_empleado.h"
#include "../include/Vector_producto.h"
#include "../include/Funciones.h"
#include <cstdlib>
#include <iostream>

Menu::Menu() {}

void Menu::menu_compra(Cliente& obj) {
  int opc;
  Facturas factura;
  factura.cliente_nombre = obj.nombre;
  factura.id_cliente = obj.id;

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
      if(id_producto_cliente > Vector_producto::productos.size()
          || Vector_producto::productos[id_producto_cliente - 1].cantidad == 0){
          std::cout << "no puedes comprar id invalido o no hay stock" << std::endl; 
        break;
      }
      std::cin.ignore();
      factura.añadir_carrito(
          Vector_producto::productos[id_producto_cliente - 1]);
      Vector_producto::productos[id_producto_cliente - 1].cantidad--;
      break;
    }
    case 2: {
      factura.generar_total();
      std::cout << "esto es lo que debe pagar: ";
      std::cout << factura.total_factura << std::endl;
        std::cin >> factura.pago_ccliente;
        std::cin.ignore();
      while (factura.pago_ccliente < factura.total_factura) {
        std::cout << "ingrese el valor";
        std::cin >> factura.pago_ccliente;
        std::cin.ignore();
      }
      factura.cambio = factura.pago_ccliente - factura.total_factura;
      Menu::ver_factura(factura);
      break;
    }
    default:
      std::cout << "opcion no valida" << std::endl;
      break;
    }
  } while (opc != 0);
}

void Menu::ver_factura(Facturas& f) {
  char c;
  std::cout << "desea ver su factura, ingrese y/n" << std::endl;
  std::cin >> c;
  if (c == 'y') {
    f.generar_factura();
  }
  std::cout << "muchas gracias por su compra" << std::endl;
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
    std::cout << "1. menu empleado(administrador)" << std::endl;
    std::cout << "2. menu productos(administrador)" << std::endl;
    std::cout << "3. menu clientes(administrador)" << std::endl;
    std::cout << "4. menu clientes" << std::endl;
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
    case 4:
      iniciar_sesion_cliente();
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

void Menu::iniciar_sesion_cliente() {
// opciones
  
  int opc;
  do {
    std::cout << "1. iniciar sesion" << std::endl;
    std::cout << "2. registrarse" << std::endl;
    std::cout << "0. salir" << std::endl;
    std::cout << "ingrese una opcion: " << std::endl;
    std::cin >> opc;
    std::cin.ignore();
    switch (opc) {
      case 1: {
        int id_buscar;
        std::cout << "ingrese su id: ";
        std::cin >> id_buscar;
        std::cin.ignore();
        int resultado = busqueda_binaria(Vector_cliente::v, id_buscar);
        if (resultado != -1) {
          std::cout << "bienvenido " << Vector_cliente::v[resultado].nombre
                    << std::endl;
          Menu::menu_compra(Vector_cliente::v[resultado]);
        } else {
          std::cout << "no se encontro el cliente" << std::endl;

        }
        break;
      }
      case 2: {
        system("figlet \"registrarse\"");
        Cliente c;
        Vector_cliente::crear(c);
        break;
      }

      default:
        std::cout << "opcion no valida" << std::endl;
        break;
    }
  } while(opc != 0);
}
