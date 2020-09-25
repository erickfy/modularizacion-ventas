#include <iostream>
using namespace std;

#include "producto.h"

bool valida(tProducto producto); // Funci?n interna

tProducto nuevoProducto() {
    tProducto producto;
    cout << "Idproduc: ";
    cin >> producto.id_prod;
    cout << "codigo: ";
    cin >> producto.codigo;
    cout << "nombre: ";
    cin >> producto.nombre;
    cout << "precio: ";
    cin >> producto.precio;
    cout << "unidades: ";
    cin >> producto.unidades;
    return producto;
}

bool valida(tProducto producto) {
    //..
    return true;
}

bool operator<(tProducto opIzq, tProducto opDer) {
    return opIzq.codigo < opDer.codigo;
}

void mostrar(tProducto producto) {

}