#include "vector_producto.h"
#include <iostream>
using namespace std;
#include <vector>

vector_producto::vector_producto(){};


void vector_producto::guardar_producto(producto p){
   
        productos.push_back(p);
    }
   


void vector_producto::mostrar_productos(){

    for (int i = 0; i < productos.size(); i++){
        cout<<"-------------------"<<endl;
        productos[i].mostrar_info();
        cout<<"-------------------"<<endl;
        system("pause");
    }
}


void vector_producto::menu_productos(){
    int opcion;
    producto p;
    do{
        
        cout << "1. Ingresar producto" << endl;
        cout << "2. Mostrar productos" << endl;
        cout << "3. Salir" << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;

        switch (opcion){
            case 1:
                p.set_info();
                guardar_producto(p);
                break;
            case 2:
                mostrar_productos();
                break;
            case 3:
                cout << "Saliendo...baby" << endl;
                break;
            default:
                cout << "Opcion no valida" << endl;
                break;
        }
    
    }while(opcion != 3);
}
    