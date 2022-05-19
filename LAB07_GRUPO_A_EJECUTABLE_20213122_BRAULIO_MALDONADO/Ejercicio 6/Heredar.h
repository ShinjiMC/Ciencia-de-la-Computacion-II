#pragma once
#include "Cabecera.h"
#include<iostream>
using namespace std;
class Ganso:protected Ave {
protected:
	string nombre;
public:
	void crear();
	void mostrar();
};
class Pato :protected Ave {
protected:
	string nombre;
public:
	void crear();
	void mostrar();
};
class Gallina :protected Ave {
protected:
	string nombre;
public:
	void crear();
	void mostrar();
};