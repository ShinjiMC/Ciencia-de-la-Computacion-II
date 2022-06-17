#include<iostream>
#include<list>
#include<cmath>
#include "Header.h"
using namespace std;
//By Braulio Nayap Maldonado Casilla
int verificar_NumHombres() {
	int numHombres;
	while (true) {
		cout << "Ingrese el numero de hombres: ";
		cin >> numHombres;
		if (numHombres > 0) {
			break;
		}
		else {
			cout << "Ingrese un numero mayor a 0. Vuelva a intentarlo." << endl;
		}
	}
	return numHombres;
}
int verificar_NumMujeres() {
	int numMujeres;
	while (true) {
		cout << "Ingrese el numero de mujeres: ";
		cin >> numMujeres;
		if (numMujeres > 0) {
			break;
		}
		else {
			cout << "Ingrese un numero mayor a 0. Vuelva a intentarlo." << endl;
		}
	}
	return numMujeres;
}
void iterar(Cola* hombres, Cola* mujeres,Cola* AH,Cola*AM)  {
	cout << "----------------------------" << endl;
	int n;
	while (true) {
		cout << "Ingrese el numero de veces que desea iterar: ";
		cin >> n;
		if (n > 0) {
			break;
		}
		else {
			cout << "Ingrese un numero mayor a 0. Vuelva a intentarlo." << endl;
		}
	}
	Cola* HAux = hombres;
	Cola* MAux = mujeres;
	for (int i = 1; i <= n; i++) {
		if (i == n) {
			if (HAux->getNum(HAux) > MAux->getNum(MAux)) {
				cout << "El hombre con la edad de " << HAux->getNum(HAux) << " años es mayor a la mujer con la edad de " << MAux->getNum(MAux) << " años." << endl;
			}
			else {
				cout << "La mujer con la edad de " << MAux->getNum(MAux) << " años es mayor al hombre con la edad de " << HAux->getNum(HAux) << " años." << endl;
			}
		}
		else {
			Nodo* auxH = HAux->getNext(HAux);
			if (auxH != NULL) {
				HAux->Eliminar(HAux);
				Nodo* auxM = MAux->getNext(MAux);
				if (auxM != NULL) {
					MAux->Eliminar(MAux);
				}
				else {	
					MAux = MAux->Pasar_otro(AM);
				}
			}
			else {
				HAux=HAux->Pasar_otro(AH);
				Nodo* auxM = MAux->getNext(MAux);
				if (auxM != NULL) {
					MAux->Eliminar(MAux);
				}
				else {
					MAux=MAux->Pasar_otro(AM);
				}
			}
			
		}
	}
}

int main() {
	setlocale(LC_ALL, "");
	Cola* hombres = NULL;
	Cola* AuxH = NULL;
	hombres = hombres->Crear();
	AuxH =AuxH->Crear();
	Cola* mujeres = NULL;
	Cola* AuxM = NULL;
	mujeres = mujeres->Crear();
	AuxM = AuxM->Crear();
	int numHombres = verificar_NumHombres();
	int numMujeres = verificar_NumMujeres();
	
	cout << "-----------HOMBRES-----------" << endl;
	for (int i = 0; i < numHombres; i++) {
		int c = 1;
		while (c != 0) {
			cout << "\tIngrese la edad del hombre: ";
			int edad;
			cin >> edad;
			if (edad > 0) {
				hombres->InsertarC(hombres, edad);
				AuxH->InsertarC(AuxH, edad);
				c = 0;
			}
			else {
				cout << "\tIngrese un numero mayor a 0. Vuelva a intentarlo." << endl;
			}	
		}
	}
	cout << "-----------MUJERES-----------" << endl;
	for (int i = 0; i < numMujeres; i++) {
		int c = 1;
		while (c != 0) {
			cout << "\tIngrese la edad de la mujer: ";
			int edad;
			cin >> edad;
			if (edad > 0) {
				mujeres->InsertarC(mujeres, edad);
				AuxM->InsertarC(AuxM, edad);
				c = 0;
			}
			else {
				cout << "\tIngrese un numero mayor a 0. Vuelva a intentarlo." << endl;
			}
		}
	}
	cout << "----------------------------" << endl;
	cout << "Hombres: ";
	hombres->Mostrar(hombres);
	cout << "Mujeres: ";
	mujeres->Mostrar(mujeres);
	while (true){
		iterar(hombres,mujeres,AuxH, AuxM);
		cout << "Desea iterar de nuevo? (1. Si / 2. No): ";
		string opcion;
		cin >> opcion;
		if (opcion == "1") {
			hombres=hombres->Pasar_otro(AuxH);
			mujeres=mujeres->Pasar_otro(AuxM);
			continue;
		}
		else if (opcion == "2") {
			break;
		}
		else {
			cout << "Ingrese una opcion valida." << endl;
		}
	}
	hombres->Destructor(hombres);
	mujeres->Destructor(mujeres);
    return 0;
}
