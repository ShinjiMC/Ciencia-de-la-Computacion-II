#include<iostream>
#include<list>
#include<cmath>
using namespace std;
//By Braulio Nayap Maldonado Casilla

class Nodo {
private:
	int num;
	Nodo* ant;
	Nodo* next;
public:
	Nodo* Crear(int num_) {
		Nodo* lista = new(class Nodo);
		lista->num = num_;
		lista->ant = NULL;
		lista->next = NULL;
		return lista;
	}
	int contar(Nodo* lista) {
		int cant=0;
		while (lista != NULL) {
			cant++;
			lista = lista->next;
		}
		return cant;
	}
	void InsertarFinalBucle(Nodo*& lista, Nodo*& lista_) {
		if (lista == NULL) {
			lista = lista_;
		}
		else {
			InsertarFinalBucle(lista->next, lista_);
		}
	}
	void InsertarFinal(Nodo*& lista, int num_) {
		if (lista == NULL) {
			lista = Crear(num_);
		}
		else {
			InsertarFinal(lista->next, num_);
		}
	}
	void Insertar(Nodo*& lista, int num_, int pos) {
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
	void Mostrar(Nodo* lista) {
		if (lista != NULL) {
			cout << lista->num << " | ";
			Mostrar(lista->next);
		}
		else {
			cout << endl;
		}
	}
	void Destructor(Nodo*& lista) {
		delete lista;
	}
};

int main() {
	Nodo* lista_Num = NULL;
	int num_;
	cout << "Ingrese un numero entero: ";
	cin >> num_;
	lista_Num=lista_Num->Crear(num_);
	string op;
	while (true) {
		cout << "MENU: \n\t1. Ingresar numero a la lista \n\t2. Mostrar lista \n\t3. Salir" << endl;
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
					lista_Num->Insertar(lista_Num, num,1);
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
					lista_Num->InsertarFinal(lista_Num,num);
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
			cout << "Saliendo... " << endl;
			lista_Num->Destructor(lista_Num);
			break;
		}
		else {
			cout << "Valor incorrecto, vuelva a intentarlo. " << endl;
		}
	}
	return 0;
}