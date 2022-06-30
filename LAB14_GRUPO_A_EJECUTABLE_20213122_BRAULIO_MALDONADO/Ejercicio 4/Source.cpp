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
Tienda Ingresar(string codigo_, string nombre_, float precio_, int stock_) {
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
		lista = Ingresar(codigo_, nombre_, precio_, stock_);
	}
}
void Mostrar(Tienda lista) {
	if (lista != NULL) {
		cout << "|"
			<< left << setw(10) << lista->codigo
			<< "|"
			<< left << setw(30) << lista->nombre
			<< "| S/."
			<< left << setw(35) << lista->precio
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
	IngresarD(lista2[moun - 1], code, name, price, stock);
	cout << "----------------------------------------------------\n" << endl;
	lista = lista2;

}
void DarBaja(Tienda*& lista, int moun) {
	cout << "----------------------------------------------------" << endl;
	for (int i = 0; i < moun; i++) {
		cout << left << setw(10) << i + 1;
		Mostrar(lista[i]);
	}
	string op2;
	cout << "Ingrese el numero del producto a Dar de Baja: ";
	cin >> op2;
	int num = stoi(op2);
	if (num <= moun && 0 < num) {
		num = num - 1;
		lista[num]->state = false;
		lista[num]->stock = 0;
		cout << "----------------------------------------------------\n" << endl;
		Mostrar(lista[num]);
	}
	else {
		cout << "Valor incorrecto. No se dio la Alta al Producto." << endl;
	}
}
void Bcode(Tienda* lista, string code, int moun) {
	int cont = 0;
	for (int i = 0; i < moun; i++) {
		if (lista[i]->codigo == code) {
			cont++;
			cout << left << setw(10) << i + 1;
			Mostrar(lista[i]);
		}
	}
	if (cont == 0) {
		cout << "No se encontro el producto." << endl;
	}
	cout << "----------------------------------------------------" << endl;
	cout << endl;
}
void Bname(Tienda* lista, string name, int moun) {
	int cont = 0;
	for (int i = 0; i < moun; i++) {
		if (lista[i]->nombre == name) {
			cont++;
			cout << left << setw(10) << i + 1;
			Mostrar(lista[i]);
		}
	}
	if (cont == 0) {
		cout << "No se encontro el producto." << endl;
	}
	cout << "----------------------------------------------------" << endl;
	cout << endl;
}
void Busqueda(Tienda* lista, int moun) {
	string op2;
	while (true) {
		cout << "\t1. Por Codigo\n\t2. Por Nombre\n\t3. Salir de Busqueda\nIngrese opcion: ";
		cin >> op2;
		if (op2 == "1") {
			string code;
			cout << "Ingrese el codigo para buscar el producto: ";
			cin >> code;
			cout << "----------------------------------------------------" << endl;
			Bcode(lista, code, moun);
		}
		else if (op2 == "2") {
			string name;
			cout << "Ingrese el nombre para buscar el producto: ";
			cin >> name;
			cout << "----------------------------------------------------" << endl;
			Bname(lista, name, moun);
		}
		else if (op2 == "3") {
			break;
		}
		else {
			cout << "Valor incorrecto. Vuelva a Intentarlo." << endl;
		}
	}
}
void Modificar(Tienda*& lista, int moun) {
	cout << "----------------------------------------------------" << endl;
	for (int i = 0; i < moun; i++) {
		cout << left << setw(10) << i + 1;
		Mostrar(lista[i]);
	}
	string op2;
	cout << "Ingrese el numero del producto a Modificar sus Datos: ";
	cin >> op2;
	int num = stoi(op2);
	if (num <= moun && 0 < num) {
		num = num - 1;
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
		lista[num]->codigo = code;
		lista[num]->nombre = name;
		lista[num]->precio = price;
		lista[num]->stock = stock;
		lista[num]->state = true;
		cout << "----------------------------------------------------\n" << endl;
		Mostrar(lista[num]);
	}
	else {
		cout << "Valor incorrecto. No se Modifico ningun Producto." << endl;
	}
}
void Menu(Tienda*& lista, int& moun) {
	string op;
	while (true) {
		cout << "--------------------------MENU----------------------\n\t1. Mostrar Itinerario\n\t2. Dar de Alta un Nuevo Producto\n\t3. Dar de Baja a un Producto \n\t4. Buscar Producto\n\t5. Modificar datos de un producto\n\t6. Salir" << endl;
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
			DarBaja(lista, moun);
			cout << endl;
		}
		else if (op == "4") {
			Busqueda(lista, moun);
		}
		else if (op == "5") {
			Modificar(lista, moun);
		}
		else if (op == "6") {
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
	delete[] lista;
	return 0;
}