#pragma once
#include<iostream>
using namespace std;
//By Braulio Nayap Maldonado Casilla
class Nodo {
private:
	int num;
	Nodo* next;
public:
	Nodo* Crear(int);
	void Insertar(Nodo*&, int);
	int getNum(Nodo*);
	Nodo* getNext(Nodo*);
	void Mostrar(Nodo*);
	void Destructor(Nodo*&);
};
class Cola {
private:
	Nodo* First;
	Nodo* Last;
public:
	Cola* Crear();
	void InsertarC(Cola*&, int);
	void Eliminar(Cola*&);
	void Mostrar(Cola*);
	void Destructor(Cola*&);
};