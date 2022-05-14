#include "Cabecera.h"
#include <iostream>
#include <vector>
using namespace std;
arraya::arraya(vector <int> arra_) {
	arra = arra_;
}
arraya::~arraya(){}
bool arraya::verificar() {
	bool rpt;
	if (arra.size() == 5) {
		rpt = true;
	}
	else { rpt = false; }
	return rpt;
}
void arraya::ingresar(int num) {
	bool rt=verificar();
	if (rt == true) {
		cout << "El arreglo esta completo." << endl;
	}
	else {
		arra.push_back(num);
		cout << "Se ingreso el valor "<<num<<" se ingreso al arreglo." << endl;
	}
}
int findIndex(vector<int>& arr, int item) {
	for (auto i = 0; i < arr.size(); ++i) {
		if (arr[i] == item)
			return i;
	}
	return -1;
}
void arraya::sacar(int num) {
	if (arra.empty()) {
		cout << "El arreglo esta vacio." << endl;
	}
	else {
		auto pos= findIndex(arra, num);
		if (pos != -1) {
			auto iterator = arra.begin() + pos;
			arra.erase(iterator);
			cout << "El valor " << num << " se elimino del arreglo." << endl;
		}
		else {
			cout << "El valor " << num << " no esta en el arreglo." << endl;
		}
	}
}
void arraya::Mostrar() {
	for (size_t i = 0; i < arra.size(); ++i) {
		cout << arra.at(i) << "; ";
	}
	cout << endl;
}