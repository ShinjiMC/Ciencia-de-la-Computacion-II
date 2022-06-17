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
	void Buscar(Nodo*, const int);
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
	Nodo* getFirst(Cola*);
	int getNum(Cola*);
	Nodo* getNext(Cola*);
	void InsertarC(Cola*&, int);
	void Eliminar(Cola*&);
	void Mostrar(Cola*);
	void Buscar(Cola*, const int);
	void Destructor(Cola*&);
	Cola* Pasar_otro(Cola*);
};