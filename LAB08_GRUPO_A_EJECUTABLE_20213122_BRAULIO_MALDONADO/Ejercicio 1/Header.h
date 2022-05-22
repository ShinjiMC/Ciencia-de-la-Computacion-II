#pragma once
#include<iostream>
using namespace std;
class forma {
private:
	string color;
	double x;
	double y;
	char* nombre;
public:
	forma (string,double, double,char*);
	virtual void imprimir();
	virtual void getColor();
	virtual void changeColor();
	virtual void changePoint();
	virtual void perimetro();
	virtual void changetam();
	virtual void area();
};




class rectangulo :public forma {
private:
	double l_menor;
	double l_mayor;
public:
	rectangulo(string, double, double, char*, double, double);
	void imprimir();
	void getColor();
	void changeColor();
	void changePoint();

	void perimetro();
	void changetam();
	void area();
};
