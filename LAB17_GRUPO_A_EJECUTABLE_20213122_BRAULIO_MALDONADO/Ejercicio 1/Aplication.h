#pragma once
#include "calculator.h"
template < typename T >
void Aplication(data<T>datos) {
	std::cout << "Los datos son: " << datos.getA() << " y " << datos.getB() << std::endl;
	std::cout << "\tSUMA: " << datos.suma() << std::endl;
	std::cout << "\tRESTA: " << datos.resta() << std::endl;
	std::cout << "\tMULTIPLICACION: " << datos.multiplicar() << std::endl;
	std::cout << "\tDIVIDIR: " << datos.dividir() << std::endl;
	std::cout << std::endl;
}