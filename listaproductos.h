#ifndef listaproductos_h
#define listaproductos_h

#include <string>


#include "producto.h"

const int NPROD = 200;

typedef struct {
	tProducto productos[NPROD];
	int cont;
} tListaProductos;

void inicializar(tListaProductos& lista);
void cargarproductos(tListaProductos& lista);
void insertarproductos(tListaProductos& lista, tProducto producto, bool& ok);
void buscarproducto(const tListaProductos& lista, string codigo, tProducto& producto, bool& ok);
void eliminarproducto(tListaProductos& lista, string codigo, bool& ok);
void mostrarproducto(const tListaProductos& lista);

#endif