#include<iostream>
#include<list>
#include<cmath>
using namespace std;
//By Braulio Nayap Maldonado Casilla

class Pila {
private:
	int num;
	Pila* next;
public:
	Pila* Crear(int num_) {
		Pila* lista = new(class Pila);
		lista->num = num_;
		lista->next = NULL;
		return lista;
	}
	void Insertar(Pila*& lista, int num_) {
		if (lista == NULL) {
			lista = Crear(num_);
		}
		else {
			Insertar(lista->next, num_);
		}
	}
	void Mostrar(Pila* lista) {
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
	void Destructor(Pila* &lista) {
		delete lista;
	}
};

int main() {
	Pila* torre = NULL;
	int op;
	cout << "Ingrese el numero de discos: ";
	cin >> op;
	for (int i = op; i > 0; i--) {
		if (i == op) {
			torre = torre->Crear(i);
		}
		else {
			torre->Insertar(torre, i);
		}
	}
	cout << "Torre de Hanoi: " << endl;
	torre->Mostrar(torre);
	cout << "Se elimino la Torre de Hanoi." << endl;
	torre->Destructor(torre);
	
    return 0;
}
