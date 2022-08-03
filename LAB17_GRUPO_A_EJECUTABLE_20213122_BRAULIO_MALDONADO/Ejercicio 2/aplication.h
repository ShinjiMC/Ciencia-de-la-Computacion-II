#pragma once
#include "lista.h"
#include<time.h>
void Aplication(lista<int>data) {
	srand(time(NULL));
	for (int i = 0; i < 99; i++) {
		int num = rand();
		data.insertar(num);
	}
	data.mostrar();
}
void Aplication(lista<float>data) {
	srand(time(NULL));
	for (int i = 0; i < 99; i++) {
		float num = rand();
		float kol = rand();
		kol = kol / 1000;
		num = num + kol;
		data.insertar(num);
	}
	data.mostrar();
}
void Aplication(lista<double>data) {
	srand(time(NULL));
	for (int i = 0; i < 99; i++) {
		double num = rand();
		double kol = rand();
		kol = kol / 100000;
		num = num + kol;
		data.insertar(num);
	}
	data.mostrar();
}
void Aplication(lista<char>data) {
	char letras[17] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q' };
	srand(time(NULL));
	for (int i = 0; i < 99; i++) {
		char num = letras[rand()%17];
		data.insertar(num);
	}
	data.mostrar();
}
void Aplication(lista<std::string>data) {
	std::string letras[17] = { "ahrj","aarriba","abajo","sube","baja","camina","anda","archivar","aka","SMS","808","club","Videio","le","folie","memorie","julio" };
	srand(time(NULL));
	for (int i = 0; i < 99; i++) {
		std::string num = letras[rand() % 17];
		data.insertar(num);
	}
	data.mostrar();
}