#include "Aplication.h"

int main() {
	data<int>entero = data<int>(2, 3);
	data<float>flotante = data<float>(2.67, 3.89);
	data<double>doble = data<double>(178393.87809470, 100.936374);
	data<char>caracter = data<char>('A', 'o');
	data<std::string>cadena = data<std::string>("hola", "mundo");
	Aplication(entero);
	Aplication(flotante);
	Aplication(doble);
	Aplication(caracter);
	Aplication(cadena);
    return 0;
}