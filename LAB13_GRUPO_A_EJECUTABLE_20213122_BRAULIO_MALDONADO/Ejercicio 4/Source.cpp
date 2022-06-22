#include<iostream>
#include<list>
#include<cmath>
using namespace std;
//By Braulio Nayap Maldonado Casilla
struct Empleado {
	string nombre;
	string sexo;
	double sueldo;
	struct Empleado* next;
};
typedef struct Empleado* EM;
EM Crear(string nombre_, string sexo_, double sueldo_) {
	EM nuevo = new(struct Empleado);
	nuevo->nombre = nombre_;
	nuevo->sexo = sexo_;
	nuevo->sueldo = sueldo_;
	nuevo->next = NULL;
	return nuevo;
}
void Ingresar(EM& lista, string nombre_, string sexo_, double sueldo_) {
	if (lista == NULL) {
		lista = Crear(nombre_, sexo_, sueldo_);
	}
	else {
		Ingresar(lista->next, nombre_, sexo_, sueldo_);
	}
}
void Mostrar(EM lista,double may, double men) {
	if (lista != NULL) {
		if (lista->sueldo > may) {
			may = lista->sueldo;
		}
		if (lista->sueldo < men) {
			men = lista->sueldo;
		}
		Mostrar(lista->next, may,men);
	}
	else {
		cout << "El mayor sueldo que existe es S/."<<may << endl;
		cout << "El menor sueldo que existe es S/." << men << endl;
	}
}
int main() {
	EM lista=NULL;
	int n;
	cout << "Ingrese la cantidad de empleados: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "----------------------------------------------------" << endl;
		string nombre,sexo;
		double sueldo;
		cout << "Ingrese el nombre del empleado: ";
		cin >> nombre;
		cout << "Ingrese el sexo del empleado: ";
		cin >> sexo;
		cout << "Ingrese el sueldo del empleado: ";
		cin >> sueldo;
		Ingresar(lista, nombre, sexo,sueldo);
	}
	cout << "----------------------------------------------------" << endl;
	double men=0, may=0;
	if (lista != NULL) {
		men = lista->sueldo;
		may = lista->sueldo;
	}
	Mostrar(lista, may, men);
	return 0;
}

