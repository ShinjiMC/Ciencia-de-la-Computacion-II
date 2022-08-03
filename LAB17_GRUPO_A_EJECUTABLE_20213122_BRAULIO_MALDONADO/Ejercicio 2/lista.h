#pragma once
#include "iostream"
template <class T>
class lista {
private:
	int n;
	T* list=NULL;
public:
	lista(T aux) {
		n = 1;
		list = new T[n];
		list[0] = aux;
	}
	void insertar(T val) {
		n++;
		T* aux = new T[n];
		for (auto i = 0; i < n; i++) {
			if (i == (n - 1)) {
				aux[i] = val;
			}
			else {
				aux[i] = list[i];
			}
		}
		list = aux;
	}
	void mostrar() {
		for (auto i = 0; i < n; i++) {
			std::cout << list[i] << " ";
		}
		std::cout << std::endl;
	}
};
