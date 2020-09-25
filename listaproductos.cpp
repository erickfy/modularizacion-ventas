#include <fstream>
#include <iostream>
#include "listaproductos.h"
using namespace std;
void cargarproductos(tListaProductos& lista)
{
    ifstream lecturaproductos;
    int x = 0;
    lista.cont = 0;
    lecturaproductos.open("productos.txt");
    if (lecturaproductos.is_open())
    {
        while (!lecturaproductos.eof())
        {

            lecturaproductos >> lista.productos[x].id_prod;
            lecturaproductos >> lista.productos[x].codigo;
            lecturaproductos >> lista.productos[x].nombre;
            lecturaproductos >> lista.productos[x].precio;
            lecturaproductos >> lista.productos[x].unidades;
            lista.cont++;
            x++;
        }
    }
    lecturaproductos.close();
}
void insertarproductos(tListaProductos& lista, tProducto producto, bool& ok)
{
    ofstream insertarproucto;
    insertarproucto.open("productos.txt", ios::app);
  cout << "id_prod: ";
        cin >> producto.id_prod;

            insertarproucto << producto.id_prod << endl;
            cout << "codigo: ";
            cin >> producto.codigo;
            insertarproucto << producto.codigo << endl;
            cout << "nombre: ";
            cin >> producto.nombre;
            insertarproucto << producto.nombre << endl;
            cout << "precio: ";
            cin >> producto.precio;
            insertarproucto << producto.precio << endl;
            cout << "unidades: ";
            cin >> producto.unidades;
            insertarproucto << producto.unidades << endl;
            lista.productos[lista.cont-1] = producto;
            lista.cont++;
    insertarproucto.close();
}
void buscarproducto(const tListaProductos& lista, string codigo, tProducto& producto, bool& ok)
{
    int x = -1;
    for (int i = 0; i < lista.cont; i++)
    {
        if (codigo == lista.productos[i].codigo)
        {
            x = i;
            cout << "producto ncontrado en la posicion " << i+1 << endl;
        }
    }
    if (x==-1)
    {
        cout << "producto no encontrado";
    }

}
void eliminarproducto(tListaProductos& lista, string codigo, bool& ok)
{
    int x = -1, p;
    for (int i = 0; i < lista.cont; i++)
    {
        if (codigo == lista.productos[i].codigo)
        {
            x = i;
        }
    }
    if (x != -1)
    {
        for (int i = x; i < lista.cont; i++)
        {
            p = i + 1;
            lista.productos[i].id_prod = lista.productos[p].id_prod;
            lista.productos[i].codigo = lista.productos[p].codigo;
            lista.productos[i].nombre = lista.productos[p].nombre;
            lista.productos[i].precio = lista.productos[p].precio;
            lista.productos[i].unidades = lista.productos[p].unidades;
        }

        lista.cont = lista.cont - 1;
    }
}
void mostrarproducto(const tListaProductos& lista)
{
    int x = 1;
    for (int i = 0; i < lista.cont-1; i++)
    {
        cout << x << "   " << lista.productos[i].codigo << "   " << lista.productos[i].nombre << "   " << lista.productos[i].precio << "   "<< lista.productos[i].unidades << endl;
        x++;
    }
}
