#include<iostream>
#include<list>
#include<cmath>
#include <math.h>
#include "Header.h"
using namespace std;
//By Braulio Nayap Maldonado Casilla
int main() {
	Pila* torre1 = NULL;
	//Id que este es Origen
	torre1 = torre1->Crear(-1);
	int op;
	cout << "Ingrese el numero de discos: ";
	cin >> op;
	for (int i = op; i > 0; i--) {
		torre1->Insertar(torre1, i);
	}
	cout << "Torre de Hanoi: " << endl;
	torre1->Mostrar1(torre1);
	cout << endl;
	cout << " -------------------- " << endl;
	Pila* torre2 = NULL;
	//Id que este es Aux
	torre2 = torre2->Crear(-2);
	Pila* torre3 = NULL;
	//Id que este es Destino
	torre3 = torre3->Crear(-3);
	//Pasar de torr1 a torre 3 Hanobi
	torre1->Pasar(op,torre1, torre2, torre3);
	cout << endl;
	cout << "Se realizaron " <<(pow(2, op))-1<<" movimientos para pasar de la torre origen a la destino." << endl;
	return 0;
}

