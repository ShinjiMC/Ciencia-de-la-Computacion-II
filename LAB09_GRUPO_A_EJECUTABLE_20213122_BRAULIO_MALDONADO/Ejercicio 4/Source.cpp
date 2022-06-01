#include<iostream>
#include<list>
#include<cmath>
using namespace std;
//By Braulio Nayap Maldonado Casilla
template <class P>
P valor_menor(P num[5]) {
	P min = num[0];
	for (int i = 0; i < 5; i++) {
		if (num[i] <= min)
			min = num[i];
	}
	return min;
}
template <class P>
P valor_mayor(P num[5]) {
	P max = num[0];
	for (int i = 0; i < 5; i++) {
		if (num[i] >= max)
			max = num[i];
	}
	return max;
}

int main() {
	int ArrayEntero[5] = { 10,7,2, 8, 6 };
	float ArrayFloat[5] = { 12.1, 8.7, 5.6, 8.4, 1.2 };
	cout << "El menor del arreglo entero es: " << valor_menor<int>(ArrayEntero) << endl;
	cout << "El mayor del arreglo entero es: " << valor_mayor<int>(ArrayEntero) << endl;
	cout << endl;
	cout << "El menor del arreglo float es: " << valor_menor<float>(ArrayFloat) << endl;
	cout << "El mayor del arreglo float es: " << valor_mayor<float>(ArrayFloat) << endl;
	return 0;
}