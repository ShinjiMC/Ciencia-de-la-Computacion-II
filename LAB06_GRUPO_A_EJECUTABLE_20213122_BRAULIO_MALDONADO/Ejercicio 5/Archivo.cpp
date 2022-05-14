#include <iostream>
#include<time.h>
#include<stdlib.h>
#include "Cabecera.h"
using namespace std;
int** matr::random() {
	srand(time(NULL));
	int** array2D = 0;
	array2D = new int* [3];
	for (int h = 0; h < 3; h++) {
		array2D[h] = new int[3]; 
		for (int w = 0; w < 3; w++) {
			array2D[h][w] = rand();;
		} 
	}
	return array2D;
}
matr::matr() {
	matric = random();
}
matr::~matr() {}
void matr::busqueda(int num) {
	int arr=0;
	for (int i = 0; i < 3; i++) {
		for (int w = 0; w < 3; w++) {
			if (matric[i][w] == num) {
				cout << "El valor " << num << " se encontro en la posicion " << i << " - " << w << endl;
				arr++;
			}
		}
	}
	if (arr == 0) {
		cout << "El valor " << num << " no se encontro en la matriz " << endl;
	}
}
void matr::mostrar() {
	for (int h = 0; h < 3; h++) {
		for (int w = 0; w < 3; w++) {
			printf("%i,", matric[h][w]);
		}
		printf("\n");
	}
}