#include "../include/Facturas.h"
#include "../include/producto.h"

#include <ctime>
#include <iostream>
#include <limits>
#include <string>

Facturas::Facturas() {}

// nombre, id, carrito, fecha, total_factura, pago_cliente, cambio, id_factura

void Facturas::añadir_carrito(producto p) {
  std::string id = std::to_string(p.id);
  std::string nombre = p.nombre;
  std::string cantidad = std::to_string(p.cantidad);
  std::string precio = std::to_string(p.precio);
  carrito.push_back({id, nombre, cantidad, precio});
}

void Facturas::generar_total() {
  total_factura = 0;
  for (const auto &i : carrito) {
    if (i.size() >= 3) {
      float cantidad = std::stoi(i[2]);
      float precio = std::stof(i[3]);
      total_factura += cantidad * precio;
    } else {
      std::cout << "Error en el carrito" << std::endl;
    }
  }
}

void Facturas::pago_cliente() {
  std::cout << "ingrese el pago: ";
  while (!(std::cin >> pago_ccliente)) {
    std::cout << "Entrada invalida, ingrese un numero subnormal";
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  }
}

void Facturas::generar_fecha() {
  time_t now = time(0);
  tm *ltm = localtime(&now);
  fecha = std::to_string(1900 + ltm->tm_year) + "/" +
          std::to_string(1 + ltm->tm_mon) + "/" + std::to_string(ltm->tm_mday);
}

void Facturas::generar_factura() {
  std::cout << "___________________________" << std::endl;
  std::cout << "Fecha: " << fecha << std::endl;
  std::cout << "Nombre: " << cliente_nombre << std::endl;
  std::cout << "ID: " << id_cliente << std::endl;
  std::cout << "___________________________\n";
  for (auto &row : carrito) {
    for (auto &i : row) {
      std::cout << i << " ";
    }
  }
  std::cout << "___________________________\n";
  std::cout << "Total: " << total_factura << std::endl;
  std::cout << "Pago: " << pago_ccliente << std::endl;
  cambio = pago_ccliente - total_factura;
  std::cout << "Cambio: " << cambio << std::endl;
  std::cout << "ID Factura: " << id_factura << std::endl;
  std::cout << "___________________________" << std::endl;
}


void Facturas::menu_factura() {
  int opc;
  do {
    std::cout << "1.mostrar vector de facturas" << std::endl;
    std::cout << "2. eliminar facturas" << std::endl;
    std::cout << "0. salir" << std::endl;
    std::cin >> opc;
    std::cin.ignore();
    switch (opc) {

      case 1: {
        // implementar mostrar vector de facturas
        break;
      }
      case 2: {
        // implementar eliminar facturas
        break;
      }
      case 0: {
        std::cout << "saliendo del menu de facturas" << std::endl;
        break;
      } 
    default:
      std::cout << "opcion invalida" << std::endl;
      break;
    }
  } while (opc != 0);
  
}