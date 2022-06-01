#include<iostream>
#include<list>
#include<cmath>
using namespace std;
//By Braulio Nayap Maldonado Casilla}
template <class P>
void ascendente(P lista[5]) {
	P a;
	for (int f = 0; f <= 4; f ++) {
		for (int fx = f; fx <= 4; fx += 1) {
			if (lista[f] > lista[fx]) {
				a = lista[f];
				lista[f] = lista[fx];
				lista[fx] = a;
			}
		}
	}
	for (int f = 0; f < 5; f ++) {
		cout << lista[f] << " ";
	}
}
template <class P>
void descendente(P lista[5]) {
	P a;
	for (int f = 0; f <= 4; f ++) {
		for (int fx = f; fx <= 4; fx += 1) {
			if (lista[f] > lista[fx]) {
				a = lista[f];
				lista[f] = lista[fx];
				lista[fx] = a;
			}
		}
	}
	P lista2[5];
	int aux = 0;
	for (int f = 4; f >= 0; f--) {
		lista2[aux]= lista[f];
		aux++;
	}
	for (int f = 0; f < 5; f ++) {
		cout << lista2[f] << " ";
	}
}

int main() {
	int ArrayEntero[5] = { 5,7,2,8,6};
	float ArrayFloat[5] = { 10.1, 8.4, 3.6, 4.4, 11.2 };
	cout << "El arreglo entero ordenado: " << endl;
	ascendente<int>(ArrayEntero);
	cout << endl;
	descendente<int>(ArrayEntero);
	cout << endl;
	cout << "El arreglo float ordenado: " << endl;
	ascendente<float>(ArrayFloat);
	cout << endl;
	descendente<float>(ArrayFloat);
	return 0;
}