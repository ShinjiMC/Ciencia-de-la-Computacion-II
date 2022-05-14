#pragma once
#include<iostream>
using namespace std;
class Alumno {
private:
	string cui;
	string nombre;
	float nota1, nota2, nota3;
public:
	Alumno(string, string, float, float, float);
	~Alumno();
	bool aprobo(float);
	void mostrar();
};