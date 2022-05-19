#pragma once
#include<iostream>
#include <vector>
using namespace std;
class Disco : protected Multimedia {
protected:
	string tipo;
public:
	Disco();
	~Disco();
	void imprimir2();
};