#include "Cabecera.h"
#include<iostream>
using namespace std;
rectangulo::rectangulo(float anc, float alt) {
	altura = alt;
	ancho = anc;
}
rectangulo::~rectangulo(){}
void rectangulo::area() {
	cout << "El area del rectangulo es " << ancho*altura << "p2" << endl;
}
void rectangulo::perimetro() {
	cout << "El perimetro del rectangulo es " << (ancho*2)+(altura*2) <<"p" << endl;
}