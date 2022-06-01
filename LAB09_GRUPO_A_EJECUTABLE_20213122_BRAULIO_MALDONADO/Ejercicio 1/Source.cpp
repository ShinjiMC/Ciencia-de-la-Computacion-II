#include<iostream>
#include<list>
#include<cmath>
using namespace std;
//By Braulio Nayap Maldonado Casilla
template <class P>
P valor_menor(P numero, P num2, P num3) {
	P min=numero;
	P alt[3] = { numero, num2, num3 };
	for (int i = 0; i < 3; i++) {
		if (alt[i] <= min)
			min = alt[i];
	}
	return min;
}
template <class P>
P valor_mayor(P numero, P num2, P num3) {
	P max = numero;
	P alt[3] = { numero, num2, num3 };
	for (int i = 0; i < 3; i++) {
		if (alt[i] >= max)
			max = alt[i];
	}
	return max;
}

int main() {
	cout << "El menor numero es: " << valor_menor<int>(1, 3, 2) << " y el mayor es: " << valor_mayor<int>(1, 3, 2) << ", de los numeros 1, 3, 2" << endl;
	cout << "El menor numero es: " << valor_menor<float>(9.65, 10.34, 9.63) << " y el mayor es: " << valor_mayor<float>(9.65, 10.34, 9.63) << ", de los numeros 9.65, 10.34, 9.63" << endl;
	cout << "El menor numero es: " << valor_menor<double>(9.1563, 9.1562, 9.1526) << " y el mayor es: " << valor_mayor<double>(9.1563, 9.1562, 9.1526) << ", de los numeros 9.1563, 9.1562, 9.1526" << endl;

    return 0;
}
