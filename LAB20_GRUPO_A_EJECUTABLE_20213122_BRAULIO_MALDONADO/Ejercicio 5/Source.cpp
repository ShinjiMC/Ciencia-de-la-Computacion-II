#include<iostream>
#include "memory"
//By Braulio Nayap Maldonado Casilla
class C1 {
private:
	std::shared_ptr<double> d;
public:
	C1(std::shared_ptr<double> value) : d(value) {}
	virtual ~C1() { std::cout << "\nC1 destructor\n"; }
	void print() const { std::cout << "Valor " << *d << std::endl; }
};

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

class C2 {
private:
	std::shared_ptr<Point> pt;
public:
	C2(std::shared_ptr<Point> value) : pt(value) {}
	virtual ~C2() { std::cout << "\nC2 destructor\n"; }
	void print() const { (*pt).imprimir(); }
};

void main() {
	std::shared_ptr <double> d = std::make_shared<double>(1.0);
	std::shared_ptr <Point> pt = std::make_shared<Point>(1.0, 2.0);

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
	std::cout << "Clases C1 - C2: " << std::endl;
	C1 ds = C1(d);
	C2 p = C2(pt);
	ds.print();
	p.print();
	std::cout << "shared_ptr a partir de un puntero debil: " << std::endl;
	std::weak_ptr<double> d2 = d;
	std::weak_ptr<Point> pt2 = pt;
	std::shared_ptr <double> d3 = d2.lock();
	std::shared_ptr <Point> pt3 = pt2.lock();
	std::cout << "Valor: " << *d3 << std::endl;
	(*pt3).imprimir();
	d.reset();
	pt.reset();
	ds.~C1();
	p.~C2();
	system("pause");
}