#ifndef listaclientes_h
#define listaclientes_h

#include <string>
using namespace std;

#include "cliente.h"

const int NCLI = 100;

typedef struct {
	tCliente clientes[NCLI];
	int cont;
} tListaClientes;

void inicializar(tListaClientes& lista);
void cargarclientes(tListaClientes& lista);
void insertarclientes(tListaClientes& lista, tCliente cliente, bool& ok);
void buscarcliente(const tListaClientes& lista, string nif, tCliente& cliente, bool& ok);
void eliminarcliente(tListaClientes& lista, string nif, bool& ok);
void mostrarclientes(const tListaClientes& lista);

#endif
