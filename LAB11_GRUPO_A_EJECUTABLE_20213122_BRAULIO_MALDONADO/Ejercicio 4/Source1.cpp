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
int Pila::getLastElem(Pila* lista) {
	if (lista->next == NULL) {
		return lista->num;
	}
	else {
		return getLastElem(lista->next);
	}
}
void Pila::Buscar(Pila* lista, int elem, int pos) {
	if (lista == NULL) {
		cout << "No se encontro el elemento" << endl;
	}
	else {
		if (lista->num == elem) {
			cout << "Se encontro el elemento en la posicion " << pos << endl;
		}
		else {
			Buscar(lista->next, elem, pos + 1);
		}
	}
}
void Pila::Mostrar(Pila* lista) const {
	if (lista != NULL) {
		if (lista->next == NULL) {
			cout << lista->num ;
		}
		else {
			cout << lista->num << " - ";
			Mostrar(lista->next);
		}
	}
}
void Pila::Mostrar1(Pila* lista) const{
	Mostrar(lista->next);
}
void Pila::MostrarOrigen(Pila* lista,Pila* lista2, Pila* lista3) const{
	if (lista->num == -1) {
		cout << "Pila Origen: ";
		lista->Mostrar(lista->next);
		cout << endl;
	}
	else if (lista2->num == -1) {
		cout << "Pila Origen: ";
		lista2->Mostrar(lista2->next);
		cout << endl;
	}
	else if (lista3->num == -1) {
		cout << "Pila Origen: ";
		lista3->Mostrar(lista3->next);
		cout << endl;
	}
}
void Pila::MostrarAux(Pila* lista, Pila* lista2, Pila* lista3) const {
	if (lista->num == -2) {
		cout << "Pila Aux: ";
		lista->Mostrar(lista->next);
		cout << endl;
	}
	else if (lista2->num == -2) {
		cout << "Pila Aux: ";
		lista2->Mostrar(lista2->next);
		cout << endl;
	}
	else if (lista3->num == -2) {
		cout << "Pila Aux: ";
		lista3->Mostrar(lista3->next);
		cout << endl;
	}
}
void Pila::MostrarDestino(Pila* lista, Pila* lista2, Pila* lista3) const {
	if (lista->num == -3) {
		cout << "Pila Destino: ";
		lista->Mostrar(lista->next);
		cout << endl;
	}
	else if (lista2->num == -3) {
		cout << "Pila Destino: ";
		lista2->Mostrar(lista2->next);
		cout << endl;
	}
	else if (lista3->num == -3) {
		cout << "Pila Destino: ";
		lista3->Mostrar(lista3->next);
		cout << endl;
	}
}
void Pila::MostrarH(Pila* lista, Pila* lista2, Pila* lista3) const  {
	MostrarOrigen(lista, lista2, lista3);
	MostrarAux(lista, lista2, lista3);
	MostrarDestino(lista, lista2, lista3);
	cout <<" -------------------- " << endl;
}
void Pila::Pasar(int n,Pila*& lista, Pila*& lista2, Pila*& lista3) {
	//Torre Hanobi
	
	if (n==1) {
		Insertar(lista3, getLastElem(lista));
		Eliminar(lista);
		MostrarH(lista, lista2, lista3);
	}
	else {
		Pasar(n - 1, lista, lista3, lista2);
		Insertar(lista3, getLastElem(lista));
		Eliminar(lista);
		MostrarH(lista, lista2, lista3);
		Pasar(n - 1, lista2, lista, lista3);
	}
}
void Pila::Destructor(Pila*& lista) {
	delete lista;
}