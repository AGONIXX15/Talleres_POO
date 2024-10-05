#include <iostream>
#include "producto.h"
#include "vector_producto.h"
#include "Persona.h"
#include "Empleado.h"

using namespace std;

int main(){
    producto p1;
    Vector_producto v1;
    v1.menu_productos();
    v1.crear(p1);
}

