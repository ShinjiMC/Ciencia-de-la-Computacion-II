#pragma once
#include "Cabecera.h"
#include <iostream>
using namespace std;
class Material : public RGB {
protected:
	string mats;
public:
	void cargar2();
};
class Objestos : public Material {
protected:
	string objet;
public:
	void cargar3();
	void Mostrar();
};