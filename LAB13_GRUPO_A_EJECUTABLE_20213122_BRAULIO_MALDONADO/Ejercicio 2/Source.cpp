#include<iostream>
#include<list>
#include<cmath>
using namespace std;
//By Braulio Nayap Maldonado Casilla
struct Alumno {
	string nombre;
	string GRUPO;
	double notasfase[3];
	double notaproyect;
	double notafinal;
	struct Alumno* next;
};
typedef struct Alumno* AL;
AL Ingresar(string nombre_,string GRUPO_, double n1, double n2, double n3, double np) {
	AL nuevo = new(struct Alumno);
	nuevo->nombre = nombre_;
	nuevo->GRUPO = GRUPO_;
	nuevo->notasfase[0] = n1;
	nuevo->notasfase[1] = n2;
	nuevo->notasfase[2] = n3;
	nuevo->notaproyect = np;
	nuevo->notafinal = ((n1 * 15) + (n2 * 20) + (n3 * 25) + (np * 40)) / 100;
	nuevo->next = NULL;
	return nuevo;
}
void Ingresar(AL& lista,string nombre_, string GRUPO_, int n1, int n2, int n3, int np) {
	if (lista == NULL) {
		lista = Ingresar(nombre_,GRUPO_, n1, n2, n3, np);
	}
	else {
		Ingresar(lista->next, nombre_, GRUPO_, n1, n2, n3, np);
	}
}
void Mostrar(AL lista) {
	if (lista != NULL) {
		cout << "El alumno " << lista->nombre << " del grupo " << lista->GRUPO << " tiene de nota final " << lista->notafinal << " con sus respectivas notas: " << lista->notasfase[0] <<" - " << lista->notasfase[1] << " - " << lista->notasfase[2] << " - " << lista->notaproyect << "." << endl;
		Mostrar(lista->next);
	}
}
int main() {
	AL lista = NULL;
	int n;
	cout << "Ingrese la cantidad de estudiantes: ";
	cin >> n;
	cout << endl;
	for (int i = 0; i < n; i++) {
		cout << "----------------------------------------------------" << endl;
		string nombre;
		string apellido;
		string GROUP;
		double n1, n2, n3, np;
		cout << "Ingrese el nombre del estudiante: ";
		cin >> nombre;
		cout << "Ingrese el apellido del estudiante: ";
		cin >> apellido;
		nombre += " ";
		nombre += apellido;
		cout << "Ingrese el grupo del estudiante: ";
		cin >> GROUP;
		cout << "Ingrese la nota de la primera fase del estudiante: ";
		cin >> n1;
		cout << "Ingrese la nota de la segunda fase del estudiante: ";
		cin >> n2;
		cout << "Ingrese la nota de la tercera fase del estudiante: ";
		cin >> n3;
		cout << "Ingrese la nota del proyecto final del estudiante: ";
		cin >> np;
		Ingresar(lista, nombre, GROUP,n1,n2,n3,np);
	}
	cout << "----------------------------------------------------" << endl;
	Mostrar(lista);
    return 0;
}
