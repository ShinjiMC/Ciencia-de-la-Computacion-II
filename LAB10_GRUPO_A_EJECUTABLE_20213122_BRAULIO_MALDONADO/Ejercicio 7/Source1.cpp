#include<iostream>
#include<list>
#include<cmath>
#include<stdlib.h>
#include<time.h>
#include<chrono>
#include "Header.h"
using namespace std;
Nodo* Nodo::Crear(int num_) {
	Nodo* lista = new(class Nodo);
	lista->num = num_;
	lista->ant = NULL;
	lista->next = NULL;
	return lista;
}
int Nodo::contar(Nodo* lista) {
	int cant = 0;
	while (lista != NULL) {
		cant++;
		lista = lista->next;
	}
	return cant;
}
void Nodo::InsertarFinalBucle(Nodo*& lista, Nodo*& lista_) {
	if (lista == NULL) {
		lista = lista_;
	}
	else {
		InsertarFinalBucle(lista->next, lista_);
	}
}
void Nodo::InsertarFinal(Nodo*& lista, int num_) {
	if (lista == NULL) {
		lista = Crear(num_);
	}
	else {
		InsertarFinal(lista->next, num_);
	}
}
void Nodo::Insertar(Nodo*& lista, int num_, int pos) {
	Nodo* sig = lista;
	Nodo* anterior = lista->ant;
	Nodo* lst = Crear(num_);
	if (pos > 0 && pos <= contar(lista)) {
		while (pos != 0) {
			if (pos == 1) {
				if (anterior == NULL) {
					lst->next = sig;
					anterior = lst;
				}
				else {
					lst->next = sig;
					InsertarFinalBucle(anterior, lst);
				}
				lista = anterior;
				break;
			}
			else {
				InsertarFinal(anterior, sig->num);
				sig = sig->next;
				pos--;
			}
		}
	}
	else {
		cout << "La posicion es incorrecta para la lista. " << endl;
	}
}
void Nodo::Mostrar(Nodo* lista) const {
	if (lista != NULL) {
		cout << lista->num << " ";
		Mostrar(lista->next);
	}
	else {
		cout << endl;
	}
}
void Nodo::eliminar(Nodo*& lista) {
	lista = NULL;
}
void Nodo::avanzaralultimo(Nodo*& lista) {
	if (lista->next == NULL) {
		eliminar(lista);
	}
	else {
		avanzaralultimo(lista->next);
	}
}
void Nodo::avanzaralinicio(Nodo*& lista) {
	if (lista->ant == NULL) {
		lista = lista->next;
	}
	else {

		avanzaralultimo(lista->ant);
	}
}
void Nodo::eliminarpos(Nodo*& lista, int pos) {
	Nodo* sig = lista;
	Nodo* anterior = lista->ant;
	if (pos > 0 && pos <= contar(lista)) {
		while (pos != 0) {
			if (pos == 1) {
				if (anterior == NULL) {
					anterior = lista->next;
				}
				else {
					sig = sig->next;
					InsertarFinalBucle(anterior, sig);
				}
				lista = anterior;
				break;
			}
			else {
				InsertarFinal(anterior, sig->num);
				sig = sig->next;
				pos--;
			}
		}
	}
	else {
		cout << "La posicion es incorrecta para la lista. " << endl;
	}
}
Nodo* Nodo::avanzar(Nodo*& lista, int pos) {
	Nodo* sig = lista;
	Nodo* anterior = lista->ant;
	if (pos > 0 && pos <= contar(lista)) {
		while (pos != 0) {
			if (pos == 1) {
				if (anterior == NULL) {
					sig = lista;
				}
				else {
					sig = sig->next;
				}
				lista = sig;
				break;
			}
			else {
				InsertarFinal(anterior, sig->num);
				sig = sig->next;
				pos--;
			}
		}
	}
	else {
		cout << "La posicion es incorrecta para la lista. " << endl;
	}
	return lista;
}
void Nodo::Ordenar(Nodo*& lista) {
	Nodo* p = lista;
	Nodo* aux = NULL;
	Nodo* sav = NULL;
	sav = sav->Crear(1);
	while (p->next != NULL) {
		aux = p->next;
		while (aux != NULL) {
			if (p->num > aux->num) {
				sav->num = aux->num;
				aux->num = p->num;
				p->num = sav->num;
			}
			aux = aux->next;
		}
		p = p->next;
	}
}
void Nodo::Destructor(Nodo*& lista) {
	delete lista;
}