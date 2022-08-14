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
	std::unique_ptr <double> d = std::make_unique<double>(1.0);
	std::unique_ptr <Point> pt = std::make_unique<Point>(1.0,2.0);
	std::cout << "Valor: " << *d << std::endl;
	pt->imprimir();
	*d = 2.0;
	(*pt).X(3.0);
	(*pt).Y(3.0);
	std::cout << "Valor: " << *d << std::endl;
	(*pt).imprimir();
	pt->X(4.0);
	pt->Y(5.0);
	std::cout << "Valor: " << *d << std::endl;
	pt->imprimir();
	d.reset();
	pt.reset();
	system("pause");
}