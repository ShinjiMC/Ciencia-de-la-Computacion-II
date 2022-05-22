#include<iostream>
#include "Header.h" 
using namespace std;
forma::forma(string a, double b2, double b, char* c) {
	color = a;
	x = b2;
	y = b;
	nombre = c;
}
void forma::getColor() {
	cout << "El color actual es " << color << endl;
}
void forma::imprimir() {
	cout << "La forma de color " << color << " estaba centrada en las coordenadas " << x << " y " << y << " con el nombre " << nombre << endl;
}
void forma::changeColor() {
	string color_;
	cout << "El color actual es " << color << ". Ingrese el nuevo color : " << endl;
	cin >> color_;
	color = color_;
}
void forma::changePoint() {
	cout << "Se cambiara el punto." << endl;
	double a1, a2;
	cout << "Ingrese la coordenada x: " << endl;
	cin >> a1;
	cout << "Ingrese la coordenada y: " << endl;
	cin >> a2;
	x = a1;
	y = a2;
}
void forma::changetam() {}
void forma::perimetro() {}
void forma::area() {}


elipse::elipse(string a, double b2, double b, char* c, double d, double e) :forma(a, b2, b, c) {
	RadioM = d;
	Radiome = e;
}
void elipse::imprimir() {
	forma::imprimir();
	cout << "El Elipse tiene las medidas de " << RadioM << " y " << Radiome << endl;
}
void elipse::getColor() {
	forma::getColor();
}
void elipse::changeColor() {
	forma::changeColor();
}
void elipse::changePoint() {
	forma::changePoint();
}
void elipse::area() {
	double pi1 = 3.14159265358979323846;
	cout << "El area del elipse es " << pi1 * (RadioM * Radiome) << endl;
}
void elipse::changetam() {
	cout << "Se cambiara el tamano del elipse." << endl;
	cout << "Ingrese el radio menor del elipse: " << endl;
	cin >> Radiome;
	while (true) {
		cout << "Ingrese el radio mayor del elipse: " << endl;
		cin >> RadioM;
		if (RadioM > Radiome) {
			break;
		}
		else {
			cout << "Vuelva a intentarlo. Recuerde que el radio menor es " << Radiome << endl;
		}
	}
}
circulo::circulo(string a, double b2, double b, char* c, double d, double e) :elipse(a, b2, b, c,d,e) {}
void circulo::imprimir() {
	elipse::imprimir();
}
void circulo::getColor() {
	elipse::getColor();
}
void circulo::changeColor() {
	elipse::changeColor();
}
void circulo::changePoint() {
	elipse::changePoint();
}
void circulo::area() {
	elipse::area();
}

rectangulo::rectangulo(string a, double b2, double b, char* c, double d, double e) :forma(a, b2, b, c) {
	l_menor = d;
	l_mayor = e;
}
void rectangulo::imprimir() {
	forma::imprimir();
	cout << "El rectangulo tiene las medidas de " << l_mayor << " y " << l_menor << endl;
}
void rectangulo::getColor() {
	forma::getColor();
}
void rectangulo::changeColor() {
	forma::changeColor();
}
void rectangulo::changePoint() {
	forma::changePoint();
}



void rectangulo::perimetro() {
	cout << "El perimetro del rectangulo es " << 2 * (l_mayor + l_menor) << endl;
}
void rectangulo::area() {
	cout << "El area del rectangulo es " << l_mayor * l_menor << endl;
}
void rectangulo::changetam() {
	cout << "Se cambiara el tamano del rectangulo." << endl;
	cout << "Ingrese el largo menor del rectangulo: " << endl;
	cin >> l_menor;
	cout << "Ingrese el largo mayor del rectangulo: " << endl;
	cin >> l_mayor;
}


cuadrado::cuadrado(string a, double b2, double b, char* c, double d, double e) :rectangulo(a, b2, b, c, d, e) {}
void cuadrado::imprimir() {
	rectangulo::imprimir();
}
void cuadrado::getColor() {
	rectangulo::getColor();
}
void cuadrado::changeColor() {
	rectangulo::changeColor();
}
void cuadrado::changePoint() {
	rectangulo::changePoint();
}
void cuadrado::perimetro() {
	rectangulo::perimetro();
}
void cuadrado::area() {
	rectangulo::area();
}



