#include "Cabecera.h"
#include "Heredar.h"
#include "string"
#include <iostream>
using namespace std;
Multimedia::Multimedia() {
	cout << "Ingrese el titulo: " << endl;
	getline(cin, titulo);
	cout << "Ingrese la duracion en minutos: " << endl;
	cin >> duracion;
}
void Multimedia::imprimir() {
	cout << "La obra " << titulo << " con duracion de " << duracion << " minutos" << endl;
}
Multimedia::~Multimedia(){}
Disco::Disco() {
	string op;
	while (true) {
		cout << "Seleccione el tipo de CD:\n\t1. Blue-Ray\n\t2. Digital" << endl;
		cin >> op;
		if (op == "1") { tipo = "Blue-Ray"; break; }
		else if (op == "2") { tipo = "Digital"; break; }
		else {
			cout << "Valor incorrecto, vuelva a intentarlo." << endl;
		}
	}
}
Disco::~Disco() {}
void Disco::imprimir2() {
	cout << "La obra " << titulo << " con duracion de " << duracion << " minutos en un CD tipo " << tipo << endl;
}