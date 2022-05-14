#pragma once
#include<iostream>
#include <vector>
using namespace std;
class arraya {
private:
	vector <int> arra;
public:
	arraya(vector <int>);
	~arraya();
	bool verificar();
	void ingresar(int);
	void sacar(int);
	void Mostrar();
};