#pragma once
#include <iostream>
using namespace std;
class Persona {
protected:
	int edad;
	string nombre;
public:
	void cargar1();
	void cargar2();
	~Persona();
};
