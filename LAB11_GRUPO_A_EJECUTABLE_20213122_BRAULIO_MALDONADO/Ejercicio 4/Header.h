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
	int getLastElem(Pila*);
	void Buscar(Pila*, int, int);
	void Mostrar(Pila*) const;
	void Mostrar1(Pila*) const;
	void MostrarOrigen(Pila*, Pila*, Pila*) const;
	void MostrarAux(Pila*, Pila*, Pila*) const;
	void MostrarDestino(Pila*, Pila*, Pila*) const;
	void MostrarH(Pila*,Pila*,Pila*) const;
	void Pasar(int, Pila*&, Pila*&, Pila*&);
	void Destructor(Pila*&);
};