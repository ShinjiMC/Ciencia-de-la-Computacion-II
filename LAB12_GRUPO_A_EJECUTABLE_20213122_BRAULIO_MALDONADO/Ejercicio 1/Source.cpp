#include<iostream>
#include<list>
#include<cmath>
using namespace std;
//By Braulio Nayap Maldonado Casilla
class Nodo {
private:
	int num;
	Nodo* next;
public:
	Nodo* Crear(int num) {
		Nodo* nuevo = new Nodo();
		nuevo->num = num;
		nuevo->next = NULL;
		return nuevo;
	}
	void Insertar(Nodo* &lista, int num) {
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
	int getNum(Nodo* lista) {
		return lista->num;
	}
	Nodo* getNext(Nodo* lista) {
		return lista->next;
	}
	void Mostrar(Nodo* lista) {
		Nodo* aux = lista;
		while (aux != NULL) {
			cout << aux->num << " ";
			aux = aux->next;
		}
		cout << endl;
	}
	void Destructor(Nodo*& lista) {
		delete lista;
	}
};
class Cola {
private:
	Nodo* First;
	Nodo* Last;
public:
	Cola* Crear() {
		Cola* nuevo = new Cola();
		nuevo->First = NULL;
		nuevo->Last = NULL;
		return nuevo;
	}
	void InsertarC(Cola* &lista,int num) {
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
	void Mostrar(Cola* lista) {
		if (lista->First != NULL) {
			Nodo* aux = lista->First;
			Nodo* base = lista->Last;
			cout << "\tLista: ";
			aux->Mostrar(aux);
			cout << "\tEl primer valor es: " << aux->getNum(aux) << endl;
			cout << "\tEl ultimo valor es: " << base->getNum(base) << endl;
		}
		else {
			cout << "La lista esta vacia." << endl;
		}
		
	}
	void Destructor(Cola* &lista) {
		delete lista;
	}
};

int main() {
	Cola* lista = NULL;
	lista = lista->Crear();
	string op;
	while (true) {
		cout << "MENU \n\t1. Ingresar un valor \n\t2. Mostrar \n\t3. Salir \nIngrese una opcion: ";
		cin >> op;
		if (op == "1") {
			int num;
			cout << "Ingrese un numero: ";
			cin >> num;
			lista->InsertarC(lista, num);
		}
		else if (op == "2") {
			lista->Mostrar(lista);
		}
		else if (op == "3") {
			lista->Destructor(lista);
			break;
		}
		else {
			cout << "Opcion no valida" << endl;
		}
	}
    return 0;
}
