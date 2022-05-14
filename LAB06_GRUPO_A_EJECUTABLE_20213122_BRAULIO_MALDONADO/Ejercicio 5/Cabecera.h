#pragma once
#include <iostream>
using namespace std;
class matr {
private:
	int **matric;
public:
	matr();
	~matr();
	int **random();
	void busqueda(int);
	void mostrar();
};