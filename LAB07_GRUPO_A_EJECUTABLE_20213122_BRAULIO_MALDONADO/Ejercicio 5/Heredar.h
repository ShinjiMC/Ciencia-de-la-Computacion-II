#pragma once
#include "Cabecera.h"
#include<iostream>
using namespace std;
class OperacionFactorial:protected OperacionBase {
protected:
	int operador;
public:
	void set(int);
	int get();
	int devolverfact();
};