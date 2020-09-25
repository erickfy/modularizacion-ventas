#include <iostream>
#include <fstream>
using namespace std;

#include "listaventas.h"

void cargarventas(tListaVentas& lista) {
    ifstream lecturaventas;
    int x = 0;
    lista.cont = 0;
    lecturaventas.open("ventas.txt");
    if (lecturaventas.is_open())
    {
        while (!lecturaventas.eof())
        {

            lecturaventas >> lista.ventas[x].id;
            lecturaventas >> lista.ventas[x].id_prod;
            lecturaventas >> lista.ventas[x].id_cli;
            lecturaventas >> lista.ventas[x].unidades;
            lista.cont++;
            x++;
        }
    }
    lecturaventas.close();
}


void buscarventas(const tListaVentas& lista, int id, tVenta& venta, bool& ok) {
    for (int i = 0; i < lista.cont; i++)
    {
        if (id == lista.ventas[i].id)
        {
            cout << "cliente encontrado en la posicion " << i+1 << endl;
        }
    }
}

void eliminarventas(tListaVentas& lista, int id, bool& ok) {
    int x = -1, p;
    for (int i = 0; i < lista.cont; i++)
    {
        if (id == lista.ventas[i].id)
        {
            x = i;
        }
    }
    if (x != -1)
    {
        for (int i = x; i < lista.cont; i++)
        {
            p = i + 1;
            lista.ventas[i].id = lista.ventas[p].id;
            lista.ventas[i].id_prod = lista.ventas[p].id_prod;
            lista.ventas[i].id_cli = lista.ventas[p].id_cli;
            lista.ventas[i].unidades = lista.ventas[p].unidades;

        }
    } 
    lista.cont=lista.cont - 1;
}

void ventasPorClientes(const tListaVentas& lista)
{
    //..
}

void ventasPorProductos(const tListaVentas& lista) 
{
    // ...
}

double totalVentas(const tListaVentas& ventas, const tListaClientes& clientes, const tListaProductos& productos)
{
    double total = 0;
    int x = 1;
    for (int i = 0; i < ventas.cont-1; i++)
    {
        cout << x << "   " << ventas.ventas[i].id_prod << "   " << ventas.ventas[i].id_cli << "   " << ventas.ventas[i].unidades << endl;
        x++;
    }
    return total;
}

void stock(const tListaVentas& ventas, const tListaClientes& clientes, const tListaProductos& productos) {
    int x = 1;
    for (int i = 0; i < productos.cont - 1; i++)
    {
        cout << x << "   " << productos.productos[i].codigo << "   " << productos.productos[i].nombre << "   " << productos.productos[i].precio << "   " << productos.productos[i].unidades << endl;
        x++;
    }
}
