#include <iostream>
#include<time.h>
#include<stdlib.h>
#include "Cabecera.h"
#include "Heredar.h"
using namespace std;
Ave::Ave() {}
Ave::~Ave(){}
void Ganso::crear() {
	volar = true;
	cresta = false;
	cuellolargo = true;
	cout << "Ingrese el nombre del ganso: " << endl;
	cin >> nombre;
}
void Ganso::mostrar() {
	cout << "El ganso llamado " <<nombre<<" puede volar, no tiene cresta y tiene un cuello largo." << endl;
}
void Pato::crear() {
	volar = true;
	cresta = false;
	cuellolargo = false;
	cout << "Ingrese el nombre del pato: " << endl;
	cin >> nombre;
}
void Pato::mostrar() {
	cout << "El pato llamado " << nombre << " puede volar, no tiene cresta y no tiene un cuello largo." << endl;
}
void Gallina::crear() {
	volar = false;
	cresta = true;
	cuellolargo = false;
	cout << "Ingrese el nombre de la gallina: " << endl;
	cin >> nombre;
}
void Gallina::mostrar() {
	cout << "La gallina llamada " << nombre << " no puede volar, tiene cresta y no tiene un cuello largo." << endl;
}