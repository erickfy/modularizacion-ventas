#include <iostream>
using namespace std;

#include "venta.h"

bool valida(tVenta venta); // Funci?n interna

tVenta nuevaVenta(int id_prod, int id_cli, int unidades) {
	tVenta venta;
	cout << "ide: ";
	cin >> venta.id_prod;
	cout << "idpord ";
	cin >> venta.id_prod;
	cout << "id clientes: ";
	cin >> venta.id_cli;
	cout << "unidades: ";
	cin >> venta.unidades;
	return venta;
}

bool valida(tVenta venta) {
	//...
	return true;
}

void mostrar(tVenta venta, const tListaClientes& clientes, const tListaProductos& productos) {

}