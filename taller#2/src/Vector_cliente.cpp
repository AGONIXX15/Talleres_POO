#include "../include/Vector_cliente.h"
#include "../include/Funciones.h"
#include <algorithm>
#include <vector>

Vector_cliente::Vector_cliente() {}

// crear un cliente
void Vector_cliente::crear() {
  Cliente c;
  c.set_info();
  this->v.push_back(c);
}

// crear cliente por parametro
void Vector_cliente::crear(Cliente &c) {
  c.set_info();
  this->v.push_back(c);
}

// buscar un cliente por id
void Vector_cliente::eliminar() {
  int id;
  std::cout << "ingrese el id del cliente que va a eliminar" << std::endl;
  std::cin >> id;
  std::cin.ignore();
  int resultado = busqueda_binaria(this->v, id);
  /*si el resultado es != -1 significa que se encontro al cliente
   * por lo tanto se procede a borrar al cliente en el caso que no se imprime
   * el mensaje de que no se encontro */
  if (resultado != -1) {
    this->v.erase(v.begin() + resultado);
    std::cout << "se ha eliminado con exito el cliente" << std::endl;
  } else
    std::cout << "no se encontro el cliente a eliminar" << std::endl;
}

// eliminar al cliente por id
void Vector_cliente::eliminar(const int &id) {
  int resultado = busqueda_binaria(this->v, id);
  /*si el resultado es != -1 significa que se encontro al cliente
   * por lo tanto se procede a borrar al cliente en el caso que no se imprime
   * el mensaje de que no se encontro */
  if (resultado != -1) {
    this->v.erase(v.begin() + resultado);
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
  int resultado = busqueda_binaria(this->v, id); // se busca al cliente
	// si se encontro al cliente se procede a actualizar
	// si no se imprime un mensaje
  if (resultado != -1) {
    std::cout << "se encontro el cliente a actualizar" << std::endl;
    this->v[resultado].set_nombre();
    this->v[resultado].set_edad();
    this->v[resultado].set_fecha();
    this->v[resultado].set_dinero();

  } else {
    std::cout << "no se encontro el cliente a actualizar" << std::endl;
  }
}

// actualizar a el cliente por id
void Vector_cliente::actualizar(const int &id) {

  int resultado = busqueda_binaria(this->v, id);
	// si se encontro al cliente se procede a actualizar
	// si no se imprime un mensaje
  if (resultado != -1) {
    std::cout << "se encontro el cliente a actualizar" << std::endl;
    this->v[resultado].set_nombre();
    this->v[resultado].set_edad();
    this->v[resultado].set_fecha();
    this->v[resultado].set_dinero();
  } else {
    std::cout << "no se encontro el cliente a actualizar" << std::endl;
  }
}

// imprimir toda la informacion de los clientes
void Vector_cliente::leer() {
  for (auto i : this->v) {
    i.mostrar_info();
  }
}
