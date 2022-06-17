#include<iostream>
#include<list>
#include<cmath>
#include "Header.h"
using namespace std;
//By Braulio Nayap Maldonado Casilla
int main() {
	Cola* lista = NULL;
	lista = lista->Crear();
	string op;
	while (true) {
		cout << "MENU \n\t1. Ingresar un valor \n\t2. Eliminar Primer Valor \n\t3. Mostrar\n\t4. Salir \nIngrese una opcion: ";
		cin >> op;
		if (op == "1") {
			int num;
			cout << "Ingrese un numero: ";
			cin >> num;
			lista->InsertarC(lista, num);
		}
		else if (op == "2") {
			lista->Eliminar(lista);
		}
		else if (op == "3") {
			lista->Mostrar(lista);
		}
		else if (op == "4") {
			lista->Destructor(lista);
			break;
		}
		else {
			cout << "Opcion no valida" << endl;
		}
	}
    return 0;
}
