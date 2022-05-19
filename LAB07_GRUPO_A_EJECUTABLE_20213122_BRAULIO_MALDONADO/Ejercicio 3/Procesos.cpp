#include "Cabecera.h"
#include "Heredar.h"
#include "string"
#include <string>
#include<iostream>
using namespace std;
ProductoBancario::ProductoBancario() {
	cout << "Ingrese el nombre del cliente: " << endl;
	cin >> cliente;
	cout << "Ingrese el saldo del cliente: " << endl;
	cin >> saldo;
	cout << "Ingrese el numero de productos bancarios del cliente: " << endl;
	cin >> numProductos;
}
ProductoBancario::~ProductoBancario() {}
void ProductoBancario::imprimir() {
	cout << "El cliente " << cliente << " tiene un saldo de " << saldo << " con una cantidad de " << numProductos << " productos." << endl;
}
Cuenta::Cuenta() {}
Cuenta::~Cuenta() {}
void Cuenta::imprimir() {
	cout << "El cliente " << cliente << " tiene un saldo de " << saldo << " con una cantidad de " << numProductos << " productos en su cuenta." << endl;
}
CuentaJoven::CuentaJoven() {}
CuentaJoven::~CuentaJoven() {}
void CuentaJoven::imprimir() {
	cout << "El cliente " << cliente << " tiene un saldo de " << saldo << " con una cantidad de " << numProductos << " productos en su cuenta Joven." << endl;
}

Prestamo::Prestamo() {
	cout << "Ingrese la cantidad en prestamo que desea realizar el cliente: " << endl;
	cin >> prestamos;
}
Prestamo::~Prestamo() {}
void Prestamo::imprimir() {
	cout << "El cliente " << cliente << " tiene un saldo de " << saldo << " con una cantidad de " << numProductos << " productos, y desea un prestamo de " << prestamos << " nuevos soles." << endl;
}
Hipoteca::Hipoteca() {
	cout << "Ingrese la cantidad de opciones de hipoteca que puede realizar el cliente: " << endl;
	cin >> hipotecas;
}
Hipoteca::~Hipoteca() {}
void Hipoteca::imprimir() {
	cout << "El cliente " << cliente << " tiene un saldo de " << saldo << " con una cantidad de " << numProductos << " productos, y desea un prestamo de " << prestamos << " nuevos soles. y tiene " << hipotecas << " propiedades para hipotecar." << endl;
}

