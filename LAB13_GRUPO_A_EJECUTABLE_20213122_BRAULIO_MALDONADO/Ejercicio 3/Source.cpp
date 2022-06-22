#include<iostream>
#include<list>
#include<cmath>
using namespace std;
//By Braulio Nayap Maldonado Casilla
struct Jugadores {
	string nombre;
	int edad;
	double talla;
};
typedef struct Jugadores* JD;
JD Crear(string nombre_, int edad_, double talla_) {
	JD nuevo = new(struct Jugadores);
	nuevo->nombre = nombre_;
	nuevo->edad = edad_;
	nuevo->talla = talla_;
	return nuevo;
}
void Ingresar(JD& lista, string nombre_, int edad_, double talla_) {
	if (lista == NULL) {
		lista = Crear(nombre_, edad_,talla_);
	}
}
void Mostrar(JD lista) {
	if (lista != NULL) {
		if (lista->edad < 20 && lista->talla > 1.70) {
			cout << "\t" << "El jugador "<< lista->nombre <<" tiene " << lista->edad <<" años con una talla de " << lista->talla <<" metros." << endl;
		}
	}
}
int main() {
	JD lista[10];
	for (int i = 0; i < 10; i++) {
		lista[i] = NULL;
	}
	for (int i = 0; i < 10; i++) {
		cout << "----------------------------------------------------" << endl;
		string nombre, apellido;
		int edad;
		double talla;
		cout << "Ingrese el nombre del jugador: ";
		cin >> nombre;
		cout << "Ingrese el apellido del jugador: ";
		cin >> apellido;
		nombre += " ";
		nombre += apellido;
		cout << "Ingrese la edad del jugador: ";
		cin >> edad;
		cout << "Ingrese la talla del jugador (en metros): ";
		cin >> talla;
		Ingresar(lista[i], nombre, edad, talla);
	}
	cout << "----------------------------------------------------" << endl;
	for (int i = 0; i < 10; i++) {
		
		Mostrar(lista[i]);
	}
    return 0;
}
