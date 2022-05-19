#pragma once
#include<iostream>
using namespace std;
class Multimedia {
protected:
	string titulo;
	int duracion;
public:
	Multimedia();
	~Multimedia();
	void imprimir();
};