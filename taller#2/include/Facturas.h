#ifndef FACTURAS_H
#define FACTURAS_H
#include <string>
#include <vector>

class Facturas {
public:
  Facturas(); // constructor de la clase
  void pago_cliente(); // metodo para ingresar el pago del cliente
  void generar_total(); // genera el total de la factura
  void generar_fecha(); // genera la fecha de la factura
  void generar_factura(); // genera la factura

  std::string cliente_nombre; // nombre del cliente
  int id_cliente; // id del cliente
  std::vector<std::vector<std::string>> carrito; // carrito de compras
  std::string fecha; // fecha de la factura
  float total_factura; // total de la factura
  float pago_ccliente; // pago del cliente
  float cambio; // cambio del cliente
  int id_factura; // id de la factura
};

#endif
