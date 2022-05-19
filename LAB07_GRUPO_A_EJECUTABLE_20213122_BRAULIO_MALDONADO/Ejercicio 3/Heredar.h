#pragma once
#include "Cabecera.h"
#include <iostream>
using namespace std;
class Cuenta : public ProductoBancario {
public:
	Cuenta();
	void imprimir();
	~Cuenta();
};
class CuentaJoven : private Cuenta {
public:
	CuentaJoven();
	void imprimir();
	~CuentaJoven();
};

class Prestamo : protected ProductoBancario {
protected:
	double prestamos;
public:
	Prestamo();
	void imprimir();
	~Prestamo();
};
class Hipoteca : public Prestamo {
protected:
	int hipotecas;
public:
	Hipoteca();
	void imprimir();
	~Hipoteca();
};