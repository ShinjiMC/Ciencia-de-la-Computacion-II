#pragma once
#include<iostream>
using namespace std;
class forma {
protected:
	string color;
	double x;
	double y;
	string nombre;
public:
	forma(string, double, double, string);
	virtual string getcolors();
	virtual void imprimir();
	virtual void getColor();
	virtual void changeColor(string);
	virtual void changePoint(double,double);
	virtual void perimetro();
	virtual void changetam();
	virtual void area();
	virtual double areas();
};

class elipse : public forma {
protected:
	double RadioM;
	double Radiome;
public:
	elipse(string, double, double, string, double, double);
	string getcolors();
	void imprimir();
	void getColor();
	void changeColor(string);
	void changePoint(double, double);
	void changetam();
	void area();
	double areas();
};
class circulo :public elipse {
public:
	circulo(string, double, double, string, double, double);
	string getcolors();
	void imprimir();
	void getColor();
	void changeColor(string);
	void changePoint(double, double);
	void area();
	double areas();
};



class rectangulo :public forma {
protected:
	double l_menor;
	double l_mayor;
public:
	rectangulo(string, double, double, string, double, double);
	string getcolors();
	void imprimir();
	void getColor();
	void changeColor(string);
	void changePoint(double, double);

	void perimetro();
	void changetam();
	void area();
	double areas();
};

class cuadrado :public rectangulo {
public:
	cuadrado(string, double, double, string, double, double);
	string getcolors();
	void imprimir();
	void getColor();
	void changeColor(string);
	void changePoint(double, double);
	void perimetro();
	void area();
	double areas();
};