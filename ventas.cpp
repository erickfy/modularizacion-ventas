#include <iostream>
#include <string>
using namespace std;
#include "cliente.h"
#include "producto.h"
#include "venta.h"
#include "listaclientes.h"
#include "listaproductos.h"
#include "listaventas.h"

int menu();

int main() {
    bool ok;
    int opc,id;
    string nif;
    tListaClientes clientes;
    tCliente cliente;
  //inicializar(clientes);
    clientes.cont = 0;
    cargarclientes(clientes);
    tListaProductos productos;
    tProducto producto;
    //inicializar(productos);
    cargarproductos(productos);
    tListaVentas ventas;
    tVenta venta;
    //inicializar(ventas);
    cargarventas(ventas);
    int op;
    do {
        op = menu();
        switch (op)
        {
        case 1:
        {
            cout << "\tmenu clientes" << endl;
            cout << "1. ver clientes" << endl;
            cout << "2. nuevo cliente" << endl;
            cout << "3. eliminar cliente" << endl;
            cout << "4. buscar cliente" << endl;
            cout << "5 atras" << endl;
            cout << "opcion: ";
            cin >> opc;
            switch (opc)
            {
            case 1:
            {
                mostrarclientes(clientes);
                break;
            }
            case 2:
            {
                insertarclientes(clientes, cliente,ok);
                break;
            }
            case 3:
            {
                cout << "ingrese el nif: ";
                cin >> nif;
                eliminarcliente(clientes, nif, ok);
                break;
            }
            case 4:
            {
                cout << "ingrese el nif: ";
                cin >> nif;
                buscarcliente(clientes, nif, cliente, ok);
                break;
            }
            case 5:
            {
                break;
            }
            default:
                break;
            }
            break;

        }
        case 2:
        {
            cout << "\tmenu clientes" << endl;
            cout << "1. ver productos" << endl;
            cout << "2. nuevo producto" << endl;
            cout << "3. eliminar producto" << endl;
            cout << "4. buscar producto" << endl;
            cout << "5 atras" << endl;
            cout << "opcion: ";
            cin >> opc;
            switch (opc)
            {
            case 1:
            {
                mostrarproducto(productos);
                break;
            }
            case 2:
            {

                insertarproductos(productos,producto, ok);
                break;
            }
            case 3:
            {
                cout << "ingrese el codigo ";
                cin >> nif;
                eliminarproducto(productos, nif, ok);
                break;
            }
            case 4:
            {
                cout << "ingrese el codigo: ";
                cin >> nif;
                buscarproducto(productos, nif, producto, ok);
                break;
            }
            case 5:
            {
                break;
            }
            default:
                break;
            }
            break;

        }
        case 3:
        {
            cout << "\tmenu ventas" << endl;
            cout << "1. ver ventas" << endl;
            cout << "2. elimnar venta" << endl;
            cout << "3. buscar venta" << endl;
            cout << "4. stock" << endl;
            cout << "opcion: ";
            cin >> opc;
            switch (opc)
            {
            case 1:
            {
                totalVentas(ventas, clientes, productos);
                break;
            }
            case 2:
            {
                cout << "ingrese el id ";
                cin >> id;
                eliminarventas(ventas, id, ok);
                break;
            }
            case 3:
            {
                cout << "ingrese el id: ";
                cin >> id;
                buscarventas(ventas, id, venta, ok);
                break;
            }
            case 4:
            {
                mostrarproducto(productos);
                break;
            }
            default:
                break;
            }
            break;
        }

        }
    } while (op != 0);

    return 0;
}

int menu() {
    int op;
    cout << "\tMenu pricipal" << endl;
    cout << "1. clientes" << endl;
    cout << "2. productos" << endl;
    cout << "3. ventas" << endl;
    cout << "0. salir" << endl;
    cin >> op;
    return op;
}
