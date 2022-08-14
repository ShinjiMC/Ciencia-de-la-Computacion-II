#include<iostream>
#include "memory"
//By Braulio Nayap Maldonado Casilla
class Point {
public:
	Point(double x1, double y1) :x(x1), y(y1) {}
	void X(double x) {
		this->x = x;
	}
	void Y(double y) {
		this->y = y;
	}
	void imprimir() {
		std::cout << "Valor (" << x << "," << y << ") " << std::endl;
	}
	~Point() {}
private:
	double x, y;
};
void main() {
	double* d = new double(1.0); //Puntero de double inicializado con new dando el valor 1.0
	Point* pt = new Point(1.0, 2.0); //Puntero de la clase Point inicializado con new dando valores de 1.0 y 2.0
	std::cout << "Valor: " << *d << std::endl;
	pt->imprimir();
	*d = 2.0; //El puntero "d" cambia de valor de 1.0 a 2.0
	(*pt).X(3.0); //Al puntero pt se le da otro valor de X de 1.0 a 3.0 mediante la funcion X señalando *pt para que se considere como no puntero
	(*pt).Y(3.0); //Al puntero pt se le da otro valor de Y de 2.0 a 3.0 mediante la funcion Y señalando *pt para que se considere como no puntero
	std::cout << "Valor: " << *d << std::endl;
	(*pt).imprimir();
	pt->X(3.0); //Al puntero pt se le da otro valor de X de 3.0 a 3.0 mediante la funcion X como puntero
	pt->Y(3.0); //Al puntero pt se le da otro valor de Y de 3.0 a 3.0 mediante la funcion Y como puntero
	std::cout << "Valor: " << *d << std::endl;
	pt->imprimir();
	delete d; //Liberamos memoria de d
	delete pt; //Liberamos memoria de pt
	system("pause");
}