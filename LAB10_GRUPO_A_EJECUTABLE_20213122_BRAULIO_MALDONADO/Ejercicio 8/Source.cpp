#include<iostream>
#include<list>
#include<cmath>
#include<stdlib.h>
#include<time.h>
#include<chrono>
#include "Header.h"
using namespace std;
//By Braulio Nayap Maldonado Casilla
void menu() {
	Nodo* lista_Num = NULL;
	int num_;
	cout << "Ingrese un numero entero: ";
	cin >> num_;
	lista_Num = lista_Num->Crear(num_);
	string op;
	while (true) {
		cout << "MENU: \n\t1. Ingresar numero a la lista \n\t2. Mostrar lista \n\t3. Eliminar un valor \n\t4. Ordenar de menor a mayor\n\t5. Ordenar de menor a mayor\n\t6. Salir" << endl;
		cin >> op;
		if (op == "1") {
			string op2;
			int c = 1;
			while (c != 0) {
				cout << "En que posicion: \n\t1. Inicio \n\t2. Personalizada \n\t3. Final \n\t4.Salir" << endl;
				cin >> op2;
				if (op2 == "1") {
					int num;
					cout << "Ingrese un numero entero: ";
					cin >> num;
					lista_Num->Insertar(lista_Num, num, 1);
					c = 0;
				}
				else if (op2 == "2") {
					int num, pos;
					cout << "Ingrese un numero entero: ";
					cin >> num;
					cout << endl;
					cout << "Ingrese la posicion en que ubicar al numero: ";
					cin >> pos;
					Nodo* Lista_ = NULL;
					lista_Num->Insertar(lista_Num, num, pos);
					c = 0;
				}
				else if (op2 == "3") {
					int num;
					cout << "Ingrese un numero entero: ";
					cin >> num;
					lista_Num->InsertarFinal(lista_Num, num);
					c = 0;
				}
				else if (op2 == "4") {
					cout << "Saliendo al menu... " << endl;
					c = 0;
				}
				else {
					cout << "Valor incorrecto, vuelva a intentarlo. " << endl;
				}
			}
		}
		else if (op == "2") {
			cout << "La lista tiene los siguientes numeros: " << endl;
			lista_Num->Mostrar(lista_Num);
		}
		else if (op == "3") {
			string op2;
			int c = 1;
			while (c != 0) {
				cout << "En que posicion: \n\t1. Inicio \n\t2. Personalizada \n\t3. Final \n\t4.Salir" << endl;
				cin >> op2;
				if (op2 == "1") {
					cout << "Se elimino el primer valor: " << endl;
					lista_Num->avanzaralinicio(lista_Num);
					c = 0;
				}
				else if (op2 == "2") {
					int pos;
					cout << endl;
					cout << "Ingrese la posicion en que ubicar al numero: ";
					cin >> pos;
					lista_Num->eliminarpos(lista_Num, pos);
					c = 0;
				}
				else if (op2 == "3") {
					cout << "Se elimino el ultimo valor: " << endl;
					lista_Num->avanzaralultimo(lista_Num);
					c = 0;
				}
				else if (op2 == "4") {
					cout << "Saliendo al menu... " << endl;
					c = 0;
				}
				else {
					cout << "Valor incorrecto, vuelva a intentarlo. " << endl;
				}
			}

		}
		else if (op == "4") {
			cout << "Ordenando lista..." << endl;
			auto start = chrono::system_clock::now();
			lista_Num->Ordenar(lista_Num);
			auto end = chrono::system_clock::now();
			chrono::duration<float, milli> duration = end - start;
			cout << "Se ordeno la lista en " << duration.count() << " milisegundos." << endl;
		}
		else if (op == "5") {
			cout << "Ordenando lista..." << endl;
			auto start = chrono::system_clock::now();
			lista_Num->OrdenarD(lista_Num);
			auto end = chrono::system_clock::now();
			chrono::duration<float, milli> duration = end - start;
			cout << "Se ordeno la lista en " << duration.count() << " milisegundos." << endl;
		}
		else if (op == "6") {
			cout << "Saliendo... " << endl;
			lista_Num->Destructor(lista_Num);
			break;
		}
		else {
			cout << "Valor incorrecto, vuelva a intentarlo. " << endl;
		}
	}
}
void valoresmil() {
	int num2;
	cout << "Ingrese la cantidad de valores que tendra su lista generada automaticamente: ";
	cin >> num2;
	Nodo* lista_Num = NULL;
	int num_;
	srand(time(NULL));
	num_ = rand();
	lista_Num = lista_Num->Crear(num_);
	cout << "Creando lista con " << num2 << " valores... " << endl;
	for (int i = 0; i < num2; i++) {
		int x = rand();
		lista_Num->Insertar(lista_Num, x, 1);
	}
	string op;
	while (true) {
		cout << "MENU: \n\t1. Mostrar lista \n\t2. Ordenar de menor a mayor\n\t3. Ordenar de mayor a menor\n\t4. Salir" << endl;
		cin >> op;
		if (op == "1") {
			cout << "La lista tiene los siguientes numeros: " << endl;
			lista_Num->Mostrar(lista_Num);
		}
		else if (op == "2") {
			cout << "Ordenando lista..." << endl;
			auto start = chrono::system_clock::now();
			lista_Num->Ordenar(lista_Num);
			auto end = chrono::system_clock::now();
			chrono::duration<float, milli> duration = end - start;
			cout << "Se ordeno la lista en " << duration.count() << " milisegundos." << endl;
		}
		else if (op == "3") {
			cout << "Ordenando lista..." << endl;
			auto start = chrono::system_clock::now();
			lista_Num->OrdenarD(lista_Num);
			auto end = chrono::system_clock::now();
			chrono::duration<float, milli> duration = end - start;
			cout << "Se ordeno la lista en " << duration.count() << " milisegundos." << endl;
		}
		else if (op == "4") {
			cout << "Saliendo... " << endl;
			lista_Num->Destructor(lista_Num);
			break;
		}
		else {
			cout << "Valor incorrecto, vuelva a intentarlo. " << endl;
		}
	}
}
int main() {
	string op;
	while (true) {
		cout << "MENU: \n\t1. Crear lista manualmente \n\t2. Crear lista valores aleatorios \nIngrese la opcion:";
		cin >> op;
		cout << endl;
		if (op == "1") {
			menu();
			break;
		}
		else if (op == "2") {
			valoresmil();
			break;
		}
		else {
			cout << "Valor incorrecto, vuelva a intentarlo. " << endl;
		}
	}
	return 0;
}