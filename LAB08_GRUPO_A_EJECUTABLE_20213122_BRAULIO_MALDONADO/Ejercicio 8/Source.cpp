#include<iostream>
#include<list>
#include<cmath>
#include "Header.h" 
using namespace std;
//By Braulio Nayap Maldonado Casilla}
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
void MenuCircle(forma* R1) {
	string op;
	while (true) {
		cout << "MENU: \n\t 1. Obtener color del circulo\n\t 2. Cambiar color del circulo\n\t 3. Cambiar coordenadas del centro\n\t 4. Mostrar datos del circulo\n\t 5. Obtener area\n\t 6. Salir \nIngrese una opcion:" << endl;
		cin >> op;
		if (op == "1") {
			R1->getColor();
		}
		else if (op == "2") {
			string color_;
			cout << "Ingrese el nuevo color : " << endl;
			cin >> color_;
			R1->changeColor(color_);
		}
		else if (op == "3") {
			cout << "Se cambiara el punto." << endl;
			double a1, a2;
			cout << "Ingrese la coordenada x: " << endl;
			cin >> a1;
			cout << "Ingrese la coordenada y: " << endl;
			cin >> a2;
			R1->changePoint(a1,a2);
		}
		else if (op == "4") {
			R1->imprimir();
		}
		else if (op == "5") {
			R1->area();
		}
		else if (op == "6") {
			break;
		}
		else {
			cout << "Valor incorrecto. Vuelve a intentarlo." << endl;
		}
	}
}
void MenuCUADRADO(forma* R1) {
	string op;
	while (true) {
		cout << "MENU: \n\t 1. Obtener color del cuadrado\n\t 2. Cambiar color del cuadrado\n\t 3. Cambiar coordenadas del centro\n\t 4. Mostrar datos del cuadrado \n\t 5. Obtener perimetro\n\t 6. Obtener area\n\t 7. Salir \nIngrese una opcion:" << endl;
		cin >> op;
		if (op == "1") {
			R1->getColor();
		}
		else if (op == "2") {
			string color_;
			cout << "Ingrese el nuevo color : " << endl;
			cin >> color_;
			R1->changeColor(color_);
		}
		else if (op == "3") {
			cout << "Se cambiara el punto." << endl;
			double a1, a2;
			cout << "Ingrese la coordenada x: " << endl;
			cin >> a1;
			cout << "Ingrese la coordenada y: " << endl;
			cin >> a2;
			R1->changePoint(a1, a2);
		}
		else if (op == "4") {
			R1->imprimir();
		}
		else if (op == "5") {
			R1->perimetro();
		}
		else if (op == "6") {
			R1->area();
		}
		else if (op == "7") {
			break;
		}
		else {
			cout << "Valor incorrecto. Vuelve a intentarlo." << endl;
		}
	}

}
void MenuElipse(forma* R1) {
	string op;
	while (true) {
		cout << "MENU: \n\t 1. Obtener color del elipse\n\t 2. Cambiar color del elipse\n\t 3. Cambiar coordenadas del centro\n\t 4. Mostrar datos del elipse \n\t 5. Obtener area\n\t 6. Salir \nIngrese una opcion:" << endl;
		cin >> op;
		if (op == "1") {
			R1->getColor();
		}
		else if (op == "2") {
			string color_;
			cout << "Ingrese el nuevo color : " << endl;
			cin >> color_;
			R1->changeColor(color_);
		}
		else if (op == "3") {
			cout << "Se cambiara el punto." << endl;
			double a1, a2;
			cout << "Ingrese la coordenada x: " << endl;
			cin >> a1;
			cout << "Ingrese la coordenada y: " << endl;
			cin >> a2;
			R1->changePoint(a1, a2);
		}
		else if (op == "4") {
			R1->imprimir();
		}
		else if (op == "5") {
			R1->area();
		}
		else if (op == "6") {
			break;
		}
		else {
			cout << "Valor incorrecto. Vuelve a intentarlo." << endl;
		}
	}
}
void MenuRectangulo(forma* R1) {
	string op;
	while (true) {
		cout << "MENU: \n\t 1. Obtener color del rectangulo\n\t 2. Cambiar color del rectangulo\n\t 3. Cambiar coordenadas del centro\n\t 4. Cambiar tamano del rectangulo\n\t 5. Mostrar datos del rectangulo \n\t 6. Obtener perimetro\n\t 7. Obtener area\n\t 8. Salir \nIngrese una opcion:" << endl;
		cin >> op;
		if (op == "1") {
			R1->getColor();
		}
		else if (op == "2") {
			string color_;
			cout << "Ingrese el nuevo color : " << endl;
			cin >> color_;
			R1->changeColor(color_);
		}
		else if (op == "3") {
			cout << "Se cambiara el punto." << endl;
			double a1, a2;
			cout << "Ingrese la coordenada x: " << endl;
			cin >> a1;
			cout << "Ingrese la coordenada y: " << endl;
			cin >> a2;
			R1->changePoint(a1, a2);
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

}
forma* CrearRectangulo() {
	forma* R1;
	string color_;
	string nombre;
	double x, y;
	double l_menor, l_mayor;
	cout << "Ingrese el color: " << endl;
	cin >> color_;
	cout << "Ingrese el nombre de la forma: " << endl;
	cin >> nombre;
	cout << "Ingrese la coordenada x: " << endl;
	cin >> x;
	cout << "Ingrese la coordenada y: " << endl;
	cin >> y;
	cout << "Ingrese el largo menor del rectangulo: " << endl;
	cin >> l_menor;
	l_mayor = ingresarlados(l_menor);
	R1 = new rectangulo(color_, x, y, nombre, l_menor, l_mayor);
	cout << "Ya se creo el rectangulo" << endl;
	return R1;
}
forma* CrearElipse() {
	forma* R1;
	string color_;
	string nombre;
	double x, y;
	double l_menor, l_mayor;
	cout << "Ingrese el color: " << endl;
	cin >> color_;
	cout << "Ingrese el nombre de la forma: " << endl;
	cin >> nombre;
	cout << "Ingrese la coordenada x: " << endl;
	cin >> x;
	cout << "Ingrese la coordenada y: " << endl;
	cin >> y;
	cout << "Ingrese el radio menor del elipse: " << endl;
	cin >> l_menor;
	l_mayor = ingresarlados(l_menor);
	R1 = new elipse(color_, x, y, nombre, l_menor, l_mayor);
	cout << "Ya se creo el elipse" << endl;
	return R1;

}
forma* CrearCuadrado() {
	forma* R1;
	string color_;
	string nombre;
	double x, y;
	double l_menor, l_mayor;
	cout << "Ingrese el color: " << endl;
	cin >> color_;
	cout << "Ingrese el nombre de la forma: " << endl;
	cin >> nombre;
	cout << "Ingrese la coordenada x: " << endl;
	cin >> x;
	cout << "Ingrese la coordenada y: " << endl;
	cin >> y;
	cout << "Ingrese el lado del cuadrado: " << endl;
	cin >> l_menor;
	l_mayor = l_menor;
	R1 = new cuadrado(color_, x, y, nombre, l_menor, l_mayor);
	cout << "Ya se creo el cuadrado" << endl;
	return R1;
}
forma* CrearCircle() {
	forma* R1;
	string color_;
	string nombre;
	double x, y;
	double l_menor, l_mayor;
	cout << "Ingrese el color: " << endl;
	cin >> color_;
	cout << "Ingrese el nombre de la forma: " << endl;
	cin >> nombre;
	cout << "Ingrese la coordenada x: " << endl;
	cin >> x;
	cout << "Ingrese la coordenada y: " << endl;
	cin >> y;
	cout << "Ingrese el radio del circulo: " << endl;
	cin >> l_menor;
	l_mayor = l_menor;
	R1 = new circulo(color_, x, y, nombre, l_menor, l_mayor);
	cout << "Ya se creo el circulo" << endl;
	return R1;
}
int main() {
	forma* vector[4];
	vector[0] = CrearRectangulo();
	vector[1] = CrearElipse();
	vector[2] = CrearCuadrado();
	vector[3] = CrearCircle();
	string colorb = vector[0]->getcolors();
	double min = 0;
	int max = 0;
	for (int i = 0; i < 4; i++) {
		if (min < vector[i]->areas()) {
			min = vector[i]->areas();
			max = i;
		}
	}
	vector[max]->imprimir();
	return 0;
}