#include "Cabecera.h"
#include<iostream>
#include <sstream>
using namespace std;
Alumno::Alumno(string CUI_, string nombre_, float no1, float no2, float no3) {
	cui=CUI_;
	nombre=nombre_;
	nota1 = no1;
	nota2 = no2;
	nota3 = no3;
}
Alumno::~Alumno(){}
bool Alumno::aprobo(float promedio) {
	bool rt;
	if (promedio >= 10.5) {
		rt = true;
	}
	else { rt = false; }
	return rt;
}
void Alumno::mostrar() {
	string primername;
	stringstream input_stringstream(nombre);
	getline(input_stringstream, primername, ' ');
	float promedio = (nota1 + nota2 + nota3) / 3;
	if (aprobo(promedio)) {
		cout << cui << ", " << primername << ", con un promedio de " << promedio << " aprobo la asignatura de Ciencias de la Computación II." << endl;
	}
	else {
		cout << cui << ", " << primername << ", con un promedio de " << promedio << " no aprobo la asignatura de Ciencias de la Computación II." << endl;
	}
}