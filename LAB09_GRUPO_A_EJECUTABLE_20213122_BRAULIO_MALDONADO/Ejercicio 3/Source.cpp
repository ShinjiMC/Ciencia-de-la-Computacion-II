#include<iostream>
#include<list>
#include<cmath>
using namespace std;
//By Braulio Nayap Maldonado Casilla
template <class P>
string operaciones(char num, P num2) {
	string correo = "@unsa.edu.pe";
	correo = num + num2 + correo;
	return correo;
}
int main() {
	for (int i = 0; i < 5; i++) {
		cout << "Persona "<<i+1<<" :" << endl;
		char a; string apell;
		cout << "\tIngrese la primera letra del nombre: ";
		cin >> a;
		cout << "\tIngrese el primer apellido: ";
		cin >> apell;
		cout << "El correo es: " << operaciones<string>(a, apell) << endl;
	}

	return 0;
}