#include <iostream>
using namespace std;

#include "cliente.h"
#include "listaclientes.h"

bool valida(tCliente cliente); // Funcion interna

tCliente nuevoCliente() {
	tCliente cliente;
	cout << "Id_cliente: ";
	cin >> cliente.id_cli;
	cout << "nif_cliente: ";
	cin >> cliente.nif;
	cout << "nombre: ";
	cin >> cliente.nombre;
	cout << "telefono: ";
	cin >> cliente.telefono;
	return cliente;
}

bool valida(tCliente cliente) {
	//...
	return true;
}
bool operator<(tCliente opIzq, tCliente opDer) {
	return opIzq.nif < opDer.nif;

}

void mostrar(tCliente cliente) {

}