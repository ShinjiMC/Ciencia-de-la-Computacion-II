#include <iostream>
#include<time.h>
#include<stdlib.h>
#include "Cabecera.h"
#include "Heredar.h"
using namespace std;
void OperacionBase::set(int a) {
	operador = a;
};
int OperacionBase::get() {
	return operador;
}
void OperacionFactorial::set(int a) {
	operador = a;
}
int OperacionFactorial::get() {
	return operador;
}
int OperacionFactorial::devolverfact() {
	int fact = 1;
	for (int i = 1; i <= operador; i++) {
		fact = fact * i;
	}
	return fact;
}