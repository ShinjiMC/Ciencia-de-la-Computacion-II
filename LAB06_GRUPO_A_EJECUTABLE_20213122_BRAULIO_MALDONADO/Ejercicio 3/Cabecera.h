#pragma once
#include<iostream>
using namespace std;
class Persona {
private:
	string nacimiento;
	string fecha;
	string nombre;
	int edads;
public:
	Persona(string, string, string, int);
	~Persona(); // Destructor
	int edad(string,string);
	void Mostrar();
};