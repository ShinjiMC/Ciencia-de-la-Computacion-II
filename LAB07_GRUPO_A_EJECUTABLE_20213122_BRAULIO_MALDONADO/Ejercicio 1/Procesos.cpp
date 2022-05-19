#include "Cabecera.h"
#include "Heredar.h"
#include "string"
#include <string>
#include<iostream>
using namespace std;
void Persona::cargar1() {
	cout << "Ingrese la edad del alumno: " << endl;
	cin >> edad;
}
void Persona::cargar2() {
	cout << "Ingrese el nombre del alumno: " << endl;
	getline(cin, nombre);
}
Persona::~Persona() {}
void Alumno::Mostrar() {
	cout << "El estudiante " << nombre << " tiene " << edad << " años de edad." << endl;
}
