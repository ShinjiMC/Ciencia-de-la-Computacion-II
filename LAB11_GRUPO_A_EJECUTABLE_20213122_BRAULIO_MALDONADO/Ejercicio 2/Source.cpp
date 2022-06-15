#include<iostream>
#include<list>
#include<cmath>
#include "Header.h"
using namespace std;
//By Braulio Nayap Maldonado Casilla
int main() {
	Pila* torre = NULL;
	int op;
	cout << "Ingrese el numero de discos: ";
	cin >> op;
	for (int i = op; i > 0; i--) {
		if (i == op) {
			torre = torre->Crear(i);
		}
		else {
			torre->Insertar(torre, i);
		}
	}
	cout << "Torre de Hanoi: " << endl;
	torre->Mostrar(torre);
	string op2;
	while (true) {
		cout << "Menu \n\t1. Ingresar elemento a la torre \n\t2. Eliminar ultimo elemento de la torre \n\t3. Salir \nIngrese una opcion: ";
		cin >> op2;
		if (op2 == "1") {
			int op3;
			cout << "Ingrese el numero de disco: ";
			cin >> op3;
			torre->Insertar(torre, op3);
			cout << "Torre de Hanoi: " << endl;
			torre->Mostrar(torre);
		}
		else if (op2 == "2") {
			torre->Eliminar(torre);
			cout << "Torre de Hanoi: " << endl;
			torre->Mostrar(torre);
		}
		else if (op2 == "3") {
			cout << "Saliendo... Se elimino la Torre de Hanoi." << endl;
			torre->Destructor(torre);
			break;
		}
		else {
			cout << "Opcion no valida" << endl;
		}
	}
	return 0;
}

