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
	Nodo* Crear(int num_) {
		Nodo* lista = new(class Nodo);
		lista->num = num_;
		lista->next = NULL;
		return lista;
	}
	void Insertar(Nodo* &lista, int num_) {
		if (lista == NULL) {
			lista = Crear(num_);
		}
		else {
			Insertar(lista->next, num_);
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
	void Destructor(Nodo* lista) {
		delete lista;
	}
};

int main() {
	Nodo* lista_Num = NULL;
	string op;
	while (true) {
		cout << "MENU: \n\t1.Ingresar numero a la lista \n\t2. Mostrar lista \n\t3. Salir" << endl;
		cin >> op;
		if (op == "1") {
			int num;
			cout << "Ingrese un numero entero: " << endl;
			cin >> num;
			lista_Num->Insertar(lista_Num, num);
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
