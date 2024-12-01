#include "../include/Facturas.h"
#include <iostream>
#include <limits>
#include <ctime>


Facturas::Facturas(){}


//nombre, id, carrito, fecha, total_factura, pago_cliente, cambio, id_factura

void Facturas::generar_total(){
  total_factura = 0; 
  for (const auto& i : carrito){
    if (i.size()>= 3){
        float cantidad = std::stoi(i[1]);
        float precio = std::stof(i[2]);
        total_factura += cantidad * precio; 
    }else {
      std::cout << "Error en el carrito" << std::endl;
    }
  }
}
void Facturas::pago_cliente(){
  std::cout <<"ingrese el pago: ";
  while(!(std::cin >> pago_ccliente)){
    std::cout<<"Entrada invalida, ingrese un numero subnormal"; 
    std::cin.clear(); 
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  }
}

void Facturas::generar_fecha(){
  time_t now = time(0);
  tm *ltm = localtime(&now);
  fecha = std::to_string(1900 + ltm->tm_year) + "/" + std::to_string(1 + ltm->tm_mon) + "/" + std::to_string(ltm->tm_mday);
}

void Facturas::generar_factura(){
  std::cout << "Nombre: " << cliente_nombre << std::endl;
  std::cout << "ID: " << id_cliente << std::endl;
  std::cout << "Fecha: " << fecha << std::endl;
  std::cout << "Total: " << total_factura << std::endl;
  std::cout << "Pago: " << pago_ccliente << std::endl;
  cambio = pago_ccliente - total_factura;
  std::cout << "Cambio: " << cambio << std::endl;
  std::cout << "ID Factura: " << id_factura << std::endl;
}
