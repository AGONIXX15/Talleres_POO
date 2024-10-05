#include "Vector_producto.h"
#include <iostream>
using namespace std;
#include <vector>

Vector_producto::Vector_producto(){};

void Vector_producto::crear(){}
void  Vector_producto::actualizar(){}
void Vector_producto::eliminar(){}



void Vector_producto::crear(producto p){
   
        productos.push_back(p);
    }
   


void Vector_producto::leer(){

    for (int i = 0; i < productos.size(); i++){
        cout<<"-------------------"<<endl;
        productos[i].mostrar_info();
        cout<<"-------------------"<<endl;
        system("pause");
    }
}




void Vector_producto::actualizar(int id){
    for (auto& prod : productos){
        if(prod.get_id()== id){
            prod.set_nombre();
            prod.set_cantidad();
            prod.set_precio();
        
            
}
    }
}


void Vector_producto::eliminar(int id){
    for(int i=0;  i<productos.size(); i++){
        if(productos[i].get_id()== id){
            productos.erase(productos.begin()+i);
            
        }
    }
}


void Vector_producto::menu_productos(){
    int opcion;
    int id_producto;
    producto p;
    do{
        
        cout << "1. Ingresar producto" << endl;
        cout << "2. Mostrar productos" << endl;
        cout << "3. actulizar producto" << endl;
        cout <<"4. eliminar  producto"<<endl;
        cout << "5. salir"<<endl;

        cout << "Ingrese una opcion: ";
        cin >> opcion;

        switch (opcion){
            case 1:
                p.set_info();
                crear(p);
                break;
            case 2:
                leer();
                break;
            case 3:
                
                cout<<"ingrese la id del producto a actualizar: ";
                cin>>id_producto;
                cin.ignore();
                actualizar(id_producto);
                break;
            case 4:
                cout <<"ingrese la id del  producto a eliminar: ";
                cin>>id_producto;
                cin.ignore();
                eliminar(id_producto);
                break;
            case 5:
                cout<<"saliendo bb"<<endl;
                break;

            default:
                cout << "Opcion no valida" << endl;
                break;
        }
    
    }while(opcion != 5);
}