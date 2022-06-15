#include<iostream>
#include<list>
#include<cmath>
#include "Header.h"
using namespace std;
//By Braulio Nayap Maldonado Casilla
Pila* Pila::Crear(int num_) {
	Pila* lista = new(class Pila);
	lista->num = num_;
	lista->next = NULL;
	return lista;
}
void Pila::Insertar(Pila*& lista, int num_) {
	if (lista == NULL) {
		lista = Crear(num_);
	}
	else {
		Insertar(lista->next, num_);
	}
}
void Pila::Eliminar(Pila*& lista) {
	if (lista->next == NULL) {
		lista = NULL;
	}
	else {
		Eliminar(lista->next);
	}
}
void Pila::Mostrar(Pila* lista) {
	if (lista != NULL) {
		if (lista->next == NULL) {
			cout << lista->num << endl;
		}
		else {
			cout << lista->num << " - ";
			Mostrar(lista->next);
		}
	}
}
void Pila::Destructor(Pila*& lista) {
	delete lista;
}