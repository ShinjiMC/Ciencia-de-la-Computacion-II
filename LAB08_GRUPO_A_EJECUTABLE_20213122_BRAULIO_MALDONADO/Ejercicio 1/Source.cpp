#include<iostream>
#include<list>
#include<cmath>
#include "Header.h" 
using namespace std;
//By Braulio Nayap Maldonado Casilla
double ingresarlados(double l) {
	double a;
	while (true) {
		cout << "Ingrese el largo mayor del rectangulo: " << endl;
		cin >> a;
		if (a > l) {
			break;
		}
		else {
			cout << "Vuelva a intentarlo. Recuerde que el lado menor es " << l << endl;
		}
	}
	return a;
}
int main() {
	forma* R1;
	string color_;
	char cadena[10];
	double x, y;
	double l_menor, l_mayor;
	cout << "Ingrese el color: " << endl;
	cin >> color_;
	cout << "Ingrese el nombre de la forma: " << endl;
	cin >> cadena;
	char* nombre = cadena;
	cout << "Ingrese la coordenada x: " << endl;
	cin >> x;
	cout << "Ingrese la coordenada y: " << endl;
	cin >> y;
	cout << "Ingrese el largo menor del rectangulo: " << endl;
	cin >> l_menor;
	l_mayor = ingresarlados(l_menor);
	R1 = new rectangulo(color_, x, y, nombre, l_menor, l_mayor);
	cout << "Ya se creo el rectangulo" << endl;
	string op;
	while (true) {
		cout << "MENU: \n\t 1. Obtener color del rectangulo\n\t 2. Cambiar color del rectangulo\n\t 3. Cambiar coordenadas del centro\n\t 4. Cambiar tamano del rectangulo\n\t 5. Mostrar datos del rectangulo \n\t 6. Obtener perimetro\n\t 7. Obtener area\n\t 8. Salir \nIngrese una opcion:" << endl;
		cin >> op;
		if (op == "1") {
			R1->getColor();
		}
		else if (op == "2") {
			R1->changeColor();
		}
		else if (op == "3") {
			R1->changePoint();
		}
		else if (op == "4") {
			R1->changetam();
		}
		else if (op == "5") {
			R1->imprimir();
		}
		else if (op == "6") {
			R1->perimetro();
		}
		else if (op == "7") {
			R1->area();
		}
		else if (op == "8") {
			break;
		}
		else {
			cout << "Valor incorrecto. Vuelve a intentarlo." << endl;
		}
	}
    return 0;
}
