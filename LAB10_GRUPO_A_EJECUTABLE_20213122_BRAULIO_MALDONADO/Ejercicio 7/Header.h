#pragma once
#include<iostream>
using namespace std;
class Nodo {
private:
	int num;
	Nodo* ant;
	Nodo* next;
public:
	Nodo* Crear(int);
	int contar(Nodo*);
	void InsertarFinalBucle(Nodo*&, Nodo*&);
	void InsertarFinal(Nodo*&, int);
	void Insertar(Nodo*&, int, int);
	void Mostrar(Nodo*) const;
	void eliminar(Nodo*&);
	void avanzaralultimo(Nodo*&);
	void avanzaralinicio(Nodo*&);
	void eliminarpos(Nodo*& , int);
	Nodo* avanzar(Nodo*& , int);
	void Ordenar(Nodo*& );
	void Destructor(Nodo*& );
};