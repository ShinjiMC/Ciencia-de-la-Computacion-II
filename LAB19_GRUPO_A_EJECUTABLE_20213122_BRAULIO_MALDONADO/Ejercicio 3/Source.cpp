#include<iostream>
#include "vector"
#include "iomanip"
#include <algorithm>
#include <time.h>
//By Braulio Nayap Maldonado Casilla
class Elementos {
public:
	int a, b;
	Elementos() {
		a = rand() % 51;
		b = rand() % 51;
	}
	void show() {
		std::cout << a << " - " << b << std::endl;
	}
	~Elementos() {}
};
class MenorA {
public:
	bool operator()( Elementos lista,  Elementos lista1) {
		return (lista.a < lista1.a);
	}
};
class MenorB {
public:
	bool operator()(Elementos lista, Elementos lista1) {
		return (lista.b < lista1.b);
	}
};
class SORTA {
public:
	std::vector <Elementos> operator()(std::vector <Elementos> lista) {
		std::sort(lista.begin(), lista.end(), MenorA());
		return lista;
	}
};
class SORTB {
public:
	std::vector <Elementos> operator()(std::vector <Elementos> lista) {
		std::sort(lista.begin(), lista.end(), MenorB());
		return lista;
	}
};

void Mostrar(std::vector <Elementos> lista, std::vector <Elementos> lista1, std::vector <Elementos> lista2) {
	std::cout << std::setw(20) << " " << std::setw(20) << "Lista Generada" << std::setw(20) << "|" << std::setw(20) << "Lista Ordenada por A" << std::setw(20) <<" " << std::setw(20) << "|" << std::setw(20) << "Lista Ordenada por B" << std::setw(20) << " " << std::setw(10) << std::endl;
	std::cout << std::setw(20) << "A" << std::setw(20) << "B" << std::setw(20) << "|" << std::setw(20) << "A" << std::setw(20) << "B" << std::setw(20) << "|" << std::setw(20) << "A" << std::setw(20) << "B" << std::setw(20) << std::endl;
	for (int i = 0; i < 20; i++) {
		std::cout << std::setw(20) <<lista[i].a << std::setw(20) << lista[i].b << std::setw(20) << "|" << std::setw(20) << lista1[i].a << std::setw(20) << lista1[i].b << std::setw(20) << "|" << std::setw(20) << lista2[i].a << std::setw(20) << lista2[i].b << std::setw(20) << std::endl;
	}

}
void main() {
	srand(time(NULL));
	std::vector <Elementos> lista;
	for (int i = 0; i < 20; i++) {
		Elementos val = Elementos();
		lista.push_back(val);
	}
	SORTA ordenA;
	SORTB ordenB;
	std::vector <Elementos> OrdenadaA = ordenA(lista);
	std::vector <Elementos> OrdenadaB = ordenB(lista);
	Mostrar(lista, OrdenadaA,OrdenadaB);
	system("pause");
}
