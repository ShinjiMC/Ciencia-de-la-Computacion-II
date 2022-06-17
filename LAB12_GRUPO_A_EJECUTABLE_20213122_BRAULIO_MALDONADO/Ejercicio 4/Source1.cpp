#include<iostream>
#include "Header.h"
using namespace std;
//By Braulio Nayap Maldonado Casilla
Nodo* Nodo::Crear(int num) {
	Nodo* nuevo = new Nodo();
	nuevo->num = num;
	nuevo->next = NULL;
	return nuevo;
}
void Nodo::Insertar(Nodo*& lista, int num) {
	Nodo* nuevo = Crear(num);
	if (lista == NULL) {
		lista = nuevo;
	}
	else {
		Nodo* aux = lista;
		while (aux->next != NULL) {
			aux = aux->next;
		}
		aux->next = nuevo;
	}
}
int Nodo::getNum(Nodo* lista) {
	return lista->num;
}
void Nodo::Buscar(Nodo* lista, int num) {
	Nodo* aux = lista;
	int pos = 1;
	while (aux != NULL) {
		if (aux->num == num) {
			cout << "El numero " << num << " se encuentra en la lista en la posicion " << pos << endl;
			return;
		}
		pos++;
		aux = aux->next;
	}
	cout << "El numero " << num << " no se encuentra en la lista" << endl;
}
Nodo* Nodo::getNext(Nodo* lista) {
	return lista->next;
}
void Nodo::Mostrar(Nodo* lista) {
	Nodo* aux = lista;
	while (aux != NULL) {
		cout << aux->num << " ";
		aux = aux->next;
	}
	cout << endl;
}
void Nodo::Destructor(Nodo*& lista) {
	delete lista;
}

Cola* Cola::Crear() {
	Cola* nuevo = new Cola();
	nuevo->First = NULL;
	nuevo->Last = NULL;
	return nuevo;
}
Nodo* Cola::getFirst(Cola* lista) {
	return lista->First;
}
int Cola::getNum(Cola* lista) {
	Nodo* F = lista->First;
	return F->getNum(F);
}
Nodo* Cola::getNext(Cola* lista) {
	Nodo* F = lista->First->getNext(lista->First);
	return F;
}
void Cola::InsertarC(Cola*& lista, int num) {
	if (lista->First == NULL) {
		Nodo* nuevo = NULL;
		nuevo->Insertar(nuevo, num);
		lista->First = nuevo;
		lista->Last = nuevo;
	}
	else {
		Nodo* nuevo2 = lista->First;
		nuevo2->Insertar(nuevo2, num);
		Nodo* nuevo = lista->First;
		Nodo* aux = nuevo;
		while (true) {
			if (aux->getNext(aux) == NULL) {
				lista->Last = aux;
				break;
			}
			else {
				aux = aux->getNext(aux);
			}
		}
	}
}
void Cola::Eliminar(Cola*& lista) {
	if (lista->First != NULL) {
		Nodo* aux = lista->First;
		lista->First = lista->First->getNext(lista->First);
		delete aux;
	}
}
void Cola::Mostrar(Cola* lista) {
	if (lista->First != NULL) {
		Nodo* aux = lista->First;
		aux->Mostrar(aux);
	}
	else {
		cout << "La lista esta vacia." << endl;
	}

}
void Cola::Buscar(Cola* lista, int num) {
	if (lista->First != NULL) {
		Nodo* aux = lista->First;
		aux->Buscar(aux, num);
	}
	else {
		cout << "La lista esta vacia." << endl;
	}
}
void Cola::Destructor(Cola*& lista) {
	delete lista;
}
Cola* Cola::Pasar_otro(Cola* este) {
	Cola* nuevo = NULL;
	nuevo = nuevo->Crear();
	Nodo* aux = este->First;
	while (aux != NULL) {
		nuevo->InsertarC(nuevo, aux->getNum(aux));
		aux = aux->getNext(aux);
	}
	return nuevo;
}
