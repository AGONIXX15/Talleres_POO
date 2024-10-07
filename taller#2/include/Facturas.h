#ifndef FACTURAS_H
#define FACTURAS_H
#include <string>
#include <vector>

class Facturas 
{
	public:
		Facturas();
		void generar_total();
		void generar_fecha();
		void generar_factura();


		std::string cliente_nombre;
		int id_cliente;
		std::vector <std::vector<std::string>> carrito;
		std::string fecha;
		float total_factura;
		float pago_cliente;
		float cambio;
		int id;
};

#endif
