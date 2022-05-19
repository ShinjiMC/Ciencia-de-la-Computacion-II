#include "Cabecera.h"
#include "Heredar.h"
#include "string"
#include <string>
#include<iostream>
using namespace std;
void RGB::cargar1() {
	while (true) {
		cout << "Ingrese el codigo del color RED: " << endl;
		cin >> red;
		if (red < 256 && 0 <= red) {
			break;
		}
		else {
			cout << "El valor debe ser entre 0 y 255. Vuelva a Intentarlo." << endl;
		}
	}
	while (true) {
		cout << "Ingrese el codigo del color GREEN: " << endl;
		cin >> green;
		if (green < 256 && 0 <= green) {
			break;
		}
		else {
			cout << "El valor debe ser entre 0 y 255. Vuelva a Intentarlo." << endl;
		}
	}
	while (true) {
		cout << "Ingrese el codigo del color BLUE: " << endl;
		cin >> blue;
		if (blue < 256 && 0 <= blue) {
			break;
		}
		else {
			cout << "El valor debe ser entre 0 y 255. Vuelva a Intentarlo." << endl;
		}
	}
}
RGB::~RGB() {}
void Material::cargar2() {
	cout << "Ingrese el nombre del material: " << endl;
	getline(cin, mats);
}
void Objestos::cargar3() {
	cout << "Ingrese el nombre del objeto: " << endl;
	getline(cin, objet);
}
void Objestos::Mostrar() {
	cout << "El objeto " << objet << " de color RGB(" << red << ", " << green << ", " << blue << ") y material " << mats << endl;
}
