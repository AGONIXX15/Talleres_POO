#include "include/Facturas.h"
#include "include/Vector_empleado.h"
#include "include/Menu.h"
#include "include/Vector_cliente.h"
#include "include/Vector_producto.h"
#include <iostream>
#include <cstdlib>

int main()
{
  system("figlet \"hola mundo\" ");
  producto p;
  p.set_info();
  Vector_producto::crear(p);
  p.set_info();
  Vector_producto::crear(p);
  Menu menu;
  // menu.menu_empleado();
  // menu.menu_productos();
  //menu.menu_clientes();
  menu.menu_compra();
  
	return 0;
}
