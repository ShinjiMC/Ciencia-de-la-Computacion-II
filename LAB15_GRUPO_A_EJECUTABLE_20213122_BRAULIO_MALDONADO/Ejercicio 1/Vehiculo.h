#pragma once
#include "Component.h"
class Vehiculo {
public:
	int n = 0;
	Component** list = NULL;
	Vehiculo() {
		this->n++;
		this->list = new Component * [n];
		for (int i = 0; i < n; i++) {
			this->list[i] = NULL;
		}
	}
	~Vehiculo() {}
	void Lista()const {
		std::cout << "El automovil posee: " << std::endl;
		for (int i = 0; i < n; i++) {
			MostrarComponent(this->list[i]);
		}
		std::cout << "\n\n";
	}
	void Insertar(Component* aux) {
		this->n = n++;
		Component** aux2 = new Component * [n];
		for (int i = 0; i < n; i++) {
			if (i == n - 1) {
				aux2[i] = aux;
			}
			else {
				aux2[i] = list[i];
			}
		}
		this->list = aux2;
	}
};