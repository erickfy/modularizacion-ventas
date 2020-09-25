#include <iostream>
#include <fstream>
using namespace std;

#include "listaclientes.h"

void inicializar(tListaClientes& lista) {
    lista.cont = 0;

}

void cargarclientes(tListaClientes& lista) {
    ifstream lectura;
    int x = 0;
    lista.cont = 0;
    lectura.open("clientes.txt");
    if (lectura.is_open())
    {
        while (!lectura.eof())
        {
            lectura >> lista.clientes[x].id_cli;
            lectura >> lista.clientes[x].nif;
            lectura >> lista.clientes[x].nombre;
            lectura >> lista.clientes[x].telefono;
            lista.cont++;
            x++;
            
        }
    }
    lectura.close();
}

void insertarclientes(tListaClientes& lista, tCliente cliente, bool& ok) {
    ofstream insertarclientes;
    insertarclientes.open("clientes.txt", ios::app);
 
        cout << "id_cliente: ";
        cin >> cliente.id_cli;

            insertarclientes << cliente.id_cli << endl;
            cout << "nif: ";
            cin >> cliente.nif;
            insertarclientes << cliente.nif << endl;
            cout << "nombre: ";
            cin >> cliente.nombre;
            insertarclientes << cliente.nombre << endl;
            cout << "telefono: ";
            cin >> cliente.telefono;
            insertarclientes << cliente.telefono << endl;
            lista.clientes[lista.cont] = cliente;
            
            lista.cont++;
  
    insertarclientes.close();
}

void buscarcliente(const tListaClientes& lista, string nif, tCliente& cliente, bool& ok) {
    int x = -1;
    for (int i = 0; i < lista.cont+1; i++)
    {
        if (nif == lista.clientes[i].nif)
        {
            x = i;
            cout << "cliente encontrado en la posicion " << i+1 << endl;
        }
    }
    if (x==-1)
    {
        cout << "cliente no encontrado" << endl;
    }
}

void eliminarcliente(tListaClientes& lista, string nif, bool& ok) {
    int x = -1, p;
    for (int i = 0; i < lista.cont; i++)
    {
        if (nif == lista.clientes[i].nif)
        {
            x = i;
        }
    }
    if (x != -1)
    {
        for (int i = x; i < lista.cont; i++)
        {
            p = i + 1;
            lista.clientes[i].id_cli = lista.clientes[p].id_cli;
            lista.clientes[i].nif = lista.clientes[p].nif;
            lista.clientes[i].nombre = lista.clientes[p].nombre;
            lista.clientes[i].telefono = lista.clientes[p].telefono;
        }
        lista.cont - 1;
    }
}

void mostrarclientes(const tListaClientes& lista) {
    int x = 1;
    for (int i = 0; i < lista.cont-1; i++)
    {
        cout << x << "   " << lista.clientes[i].nif << "   " << lista.clientes[i].nombre << "   " << lista.clientes[i].telefono << endl;
        x++;
    }
}
