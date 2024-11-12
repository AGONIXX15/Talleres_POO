#include "../include/Vector_producto.h"
#include <iostream>
#include <vector>

// constructor
Vector_producto::Vector_producto() {};

// static vector
std::vector<producto> Vector_producto::productos;

void Vector_producto::crear() {}
void Vector_producto::actualizar() {}
void Vector_producto::eliminar() {}

// agrega un producto al vector productos
void Vector_producto::crear(producto& p) {

  Vector_producto::productos.push_back(p);
}

void Vector_producto::leer() {

  for (int i = 0; i < Vector_producto::productos.size(); i++) {
    std::cout << "-------------------" << std::endl;
    Vector_producto::productos[i].mostrar_info();
    std::cout << "-------------------" << std::endl;
    system("pause");
  }
}

void Vector_producto::actualizar(int& id) {
  for (auto &prod : Vector_producto::productos) {
    if (prod.get_id() == id) {
      prod.set_nombre();
      prod.set_cantidad();
      prod.set_precio();
    }
  }
}

// elimina un producto del vector productos
void Vector_producto::eliminar(int id) {
  for (int i = 0; i < Vector_producto::productos.size(); i++) {
    if (Vector_producto::productos[i].get_id() == id) {
      Vector_producto::productos.erase(Vector_producto::productos.begin() + i);
    }
  }
}

// menu de productos
void Vector_producto::menu_productos() {
  int opcion;
  int id_producto;
  producto p;
	// ejecuta el menu hasta que el usuario elija la opcion 5
  do {

    std::cout << "1. Ingresar producto" << std::endl;
    std::cout << "2. Mostrar Vector_producto::productos" << std::endl;
    std::cout << "3. actulizar producto" << std::endl;
    std::cout << "4. eliminar  producto" << std::endl;
    std::cout << "5. salir" << std::endl;

    std::cout << "Ingrese una opcion: ";
    cin >> opcion;

    switch (opcion) {
    case 1:
      p.set_info();
      crear(p);
      break;
    case 2:
      leer();
      break;
    case 3:

      std::cout << "ingrese la id del producto a actualizar: ";
      cin >> id_producto;
      cin.ignore();
      actualizar(id_producto);
      break;
    case 4:
      std::cout << "ingrese la id del  producto a eliminar: ";
      cin >> id_producto;
      cin.ignore();
      eliminar(id_producto);
      break;
    case 5:
      std::cout << "saliendo bb" << std::endl;
      break;

    default:
      std::cout << "Opcion no valida" << std::endl;
      break;
    }

  } while (opcion != 5);
}
