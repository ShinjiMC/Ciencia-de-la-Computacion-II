#include<iostream>
#include<list>
#include <string>
#include<cmath>
using namespace std;
//By Braulio Nayap Maldonado Casilla
struct Alumno {
	string nombre;
	int cumple[2];
	struct Alumno* next;
};
typedef struct Alumno* AL;
AL Ingresar(string nombre_, int dia, int mes) {
	AL nuevo = new(struct Alumno);
	nuevo->nombre = nombre_;
	nuevo->cumple[0] = dia;
	nuevo->cumple[1] = mes;
	nuevo->next = NULL;
	return nuevo;
}
void Ingresar(AL& lista,string nombre_, int dia, int mes) {
	if (lista == NULL) {
		lista = Ingresar(nombre_, dia, mes);
	}
	else {
		Ingresar(lista->next, nombre_, dia, mes);
	}
}
void MostrarMes(AL lista, int mes) {
	if (lista != NULL) {
		if (lista->cumple[1] == mes) {
			cout << "El alumno " << lista->nombre << " nacio el " << lista->cumple[0] << " del mes " << lista->cumple[1] << endl;
			MostrarMes(lista->next, mes);
		}
		else {
			MostrarMes(lista->next, mes);
		}
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
		int dia;
		int mes;
		cout << "Ingrese el nombre del estudiante: ";
		cin >> nombre;
		cout << "Ingrese el apellido del estudiante: ";
		cin >> apellido;
		nombre += " ";
		nombre += apellido;
		while (true) {
			cout << "Ingrese el dia de su cumpleaños (en numeros): ";
			cin >> dia;
			if (dia < 32 && 0 < dia) {
				break;
			}
			else{
				cout << "Dia incorrecto, considere entre el 1 al 31." << endl;
			}
		}
		while (true) {
			cout << "Ingrese el mes de su cumpleaños (en numeros): ";
			cin >> mes;
			if (mes < 13 && 0 < mes) {
				break;
			}
			else {
				cout << "Mes incorrecto, considere que solo hay 12 meses." << endl;
			}
		}
		Ingresar(lista, nombre, dia, mes);
	}
	cout << "----------------------------------------------------" << endl;
	int moun;
	cout << "Ingrese el mes de cumpleaños de los estudiantes a mostrar: ";
	cin >> moun;
	MostrarMes(lista, moun);
    return 0;
}
