#pragma once
#include<iostream>
using namespace std;
//By Braulio Nayap Maldonado Casilla

class Pila {
private:
	int num;
	Pila* next;
public:
	Pila* Crear(int);
	void Insertar(Pila*&, int);
	void Eliminar(Pila*&);
	void Buscar(Pila*, int, int);
	void Mostrar(Pila*);
	void Destructor(Pila*&);
};