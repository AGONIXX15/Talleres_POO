#include "../include/Vector_cliente.h"
#include "../include/Funciones.h"
#include <algorithm>
#include <vector>

Vector_cliente::Vector_cliente() {}

std::vector<Cliente> Vector_cliente::v;

// crear un cliente
void Vector_cliente::crear() {
  Cliente c;
  c.set_info();
  Vector_cliente::v.push_back(c);
}

// crear cliente por parametro
void Vector_cliente::crear(Cliente &c) {
  c.set_info();
  Vector_cliente::v.push_back(c);
}

// buscar un cliente por id
void Vector_cliente::eliminar() {
  int id;
  std::cout << "ingrese el id del cliente que va a eliminar" << std::endl;
  std::cin >> id;
  std::cin.ignore();
  int resultado = busqueda_binaria(Vector_cliente::v, id);
  /*si el resultado es != -1 significa que se encontro al cliente
   * por lo tanto se procede a borrar al cliente en el caso que no se imprime
   * el mensaje de que no se encontro */
  if (resultado != -1) {
    Vector_cliente::v.erase(v.begin() + resultado);
    std::cout << "se ha eliminado con exito el cliente" << std::endl;
  } else
    std::cout << "no se encontro el cliente a eliminar" << std::endl;
}

// eliminar al cliente por id
void Vector_cliente::eliminar(const int &id) {
  int resultado = busqueda_binaria(Vector_cliente::v, id);
  /*si el resultado es != -1 significa que se encontro al cliente
   * por lo tanto se procede a borrar al cliente en el caso que no se imprime
   * el mensaje de que no se encontro */
  if (resultado != -1) {
    Vector_cliente::v.erase(v.begin() + resultado);
    std::cout << "se ha eliminado con exito el cliente" << std::endl;
  } else
    std::cout << "no se encontro el cliente a eliminar" << std::endl;
}

// actualizar a el cliente
void Vector_cliente::actualizar() {
  int id;
  std::cout << "ingrese el id del cliente que desea actualizar" << std::endl;
  std::cin >> id;
  std::cin.ignore();
  int resultado = busqueda_binaria(Vector_cliente::v, id); // se busca al cliente
	// si se encontro al cliente se procede a actualizar
	// si no se imprime un mensaje
  if (resultado != -1) {
    std::cout << "se encontro el cliente a actualizar" << std::endl;
    Vector_cliente::v[resultado].set_nombre();
    Vector_cliente::v[resultado].set_edad();
    Vector_cliente::v[resultado].set_fecha();
    Vector_cliente::v[resultado].set_dinero();

  } else {
    std::cout << "no se encontro el cliente a actualizar" << std::endl;
  }
}

// actualizar a el cliente por id
void Vector_cliente::actualizar(const int &id) {

  int resultado = busqueda_binaria(Vector_cliente::v, id);
	// si se encontro al cliente se procede a actualizar
	// si no se imprime un mensaje
  if (resultado != -1) {
    std::cout << "se encontro el cliente a actualizar" << std::endl;
    Vector_cliente::v[resultado].set_nombre();
    Vector_cliente::v[resultado].set_edad();
    Vector_cliente::v[resultado].set_fecha();
    Vector_cliente::v[resultado].set_dinero();
  } else {
    std::cout << "no se encontro el cliente a actualizar" << std::endl;
  }
}
void Vector_cliente::leer() {
  for (auto i : Vector_cliente::v) {
    i.mostrar_info();
  }
}
// imprimir toda la informacion de los clientes
void Vector_cliente::leer(bool mostrar) {
  for (auto i : Vector_cliente::v) {
    i.mostrar_info();
  }
}

void Vector_cliente::menu_clientes() {
  int opc;
  Cliente c;
  do {
    std::cout << "1. crear cliente" << std::endl;
    std::cout << "2. eliminar cliente" << std::endl;
    std::cout << "3. actualizar cliente" << std::endl;
    std::cout << "4. leer clientes" << std::endl;
    std::cout << "5. acciones de cliente" << std::endl;
    std::cout << "0. salir" << std::endl;
    std::cout << "ingrese una opcion para continuar: ";
    std::cin >> opc;
    std::cin.ignore();

    switch (opc) {
    case 1:{
        Vector_cliente::crear(c);
      break;}
      case 2:{
        std::cout << "ingrese el id del cliente que va a eliminar" << std::endl;
        int id;
        std::cin >> id;
        Vector_cliente::eliminar(id);
      break;}
    case 3:{
        int id;
        std::cout << "ingrese el id del cliente que desea actualizar" << std::endl;
        std::cin >> id;
        Vector_cliente::actualizar(id);
      break;}
    case 4:{
        Vector_cliente::leer(true);
      break;}
    case 5:
      Cliente::menu_clientes();
      break;  
    }
  } while (opc != 0);
}
