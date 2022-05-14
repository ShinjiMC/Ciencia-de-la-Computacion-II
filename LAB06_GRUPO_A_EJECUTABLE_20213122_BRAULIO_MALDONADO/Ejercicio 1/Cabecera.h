#pragma once
#include <iostream>
using namespace std;
class rectangulo {
private:
	float ancho;
	float altura;
public:
	rectangulo(float, float);
	~rectangulo();
	void area();
	void perimetro();
};