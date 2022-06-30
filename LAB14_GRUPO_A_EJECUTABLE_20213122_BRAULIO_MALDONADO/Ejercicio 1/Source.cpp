#include<iostream>
#include<list>
#include <string>
#include<cmath>
#include <iomanip>
using namespace std;
//By Braulio Nayap Maldonado Casilla
struct Data {
	string codigo;
	string nombre;
	float precio;
	int stock;
	bool state;
};
typedef struct Data* Tienda;
Tienda Ingresar(string codigo_,string nombre_, float precio_, int stock_) {
	Tienda nuevo = new(struct Data);
	nuevo->codigo = codigo_;
	nuevo->nombre = nombre_;
	nuevo->precio = precio_;
	nuevo->stock = stock_;
	nuevo->state = true;
	return nuevo;
}
void IngresarD(Tienda& lista, string codigo_, string nombre_, float precio_, int stock_) {
	if (lista == NULL) {
		lista = Ingresar(codigo_,nombre_, precio_, stock_);
	}
}
void Mostrar(Tienda lista) {
	if (lista != NULL) {
		cout << "|"
			<< left << setw(10) << lista->codigo
			<< "|"
			<< left << setw(30) << lista->nombre
			<< "|"
			<< left << setw(15) << "S/." << lista->precio
			<< "|"
			<< left << setw(15) << lista->stock
			<< "|";
		if (lista->state) {
			cout << left << setw(15) << "ACTIVO"
				<< "|" << endl;
		}
		else {
			cout << left << setw(15) << "INACTIVO"
				<< "|" << endl;
		}
			
	}
}
void DarAlta(Tienda*& lista, int& moun) {
	moun = moun + 1;
	Tienda* lista2 = new Tienda[moun]; // MATRIZ STOCK
	for (int i = 0; i < moun; i++) {
		if (i == moun - 1) {
			lista2[i] = NULL;
		}
		else {
			lista2[i] = lista[i];
		}
	}
	cout << "\n----------------------------------------------------" << endl;
	string code, name;
	float price;
	int stock;
	cout << "Ingrese el codigo del producto: ";
	cin >> code; cout << endl;
	cout << "Ingrese el nombre del producto: ";
	cin >> name; cout << endl;
	cout << "Ingrese el precio del producto: ";
	cin >> price; cout << endl;
	cout << "Ingrese el stock o cantidad del producto: ";
	cin >> stock; cout << endl;
	IngresarD(lista2[moun-1], code, name, price, stock);
	cout << "----------------------------------------------------\n" << endl;
	lista = lista2;

}

void Menu(Tienda*& lista,int& moun) {
	string op;
	while (true) {
		cout << "--------------------------MENU----------------------\n\t1. Mostrar Itinerario\n\t2. Dar de Alta un Nuevo Producto\n\t3. Dar de Baja a un Producto \n\t4. Salir" << endl;
		cin >> op;
		if (op == "1") {
			for (int i = 0; i < moun; i++) {
				Mostrar(lista[i]);
			}
			cout << endl;
		}
		else if (op == "2") {
			DarAlta(lista, moun);
			cout << endl;
		}
		else if (op == "3") {

		}
		else if (op == "4") {
			break;
		}
		else {
			cout << "Valor incorrecto. Vuelva a Intentarlo." << endl;
		}
	}
}
int main() {
	cout << "----------------------------------------------------" << endl;
	int moun;
	cout << "Ingrese la cantidad de productos distintos: ";
	cin >> moun;
	cout << endl;
	Tienda* lista = new Tienda[moun]; // MATRIZ STOCK
	for (int i = 0; i < moun; i++) {
		lista[i] = NULL;
	}
	for (int i = 0; i < moun; i++) {
		cout << "----------------------------------------------------" << endl;
		string code, name;
		float price;
		int stock;
		cout << "Ingrese el codigo del producto: ";
		cin >> code; cout << endl;
		cout << "Ingrese el nombre del producto: ";
		cin >> name; cout << endl;
		cout << "Ingrese el precio del producto: ";
		cin >> price; cout << endl;
		cout << "Ingrese el stock o cantidad del producto: ";
		cin >> stock; cout << endl;
		IngresarD(lista[i], code, name, price, stock);
	}
	cout << "----------------------------------------------------" << endl;
	for (int i = 0; i < moun; i++) {
		Mostrar(lista[i]);
	}
	Menu(lista, moun);
    return 0;
}
