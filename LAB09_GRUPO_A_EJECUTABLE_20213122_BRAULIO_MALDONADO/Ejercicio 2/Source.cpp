#include<iostream>
#include<list>
#include<cmath>
using namespace std;
//By Braulio Nayap Maldonado Casilla
template <class P>
void operaciones(P num, P num2) {
	cout << "\tLa suma es: " << num + num2 << endl;
	cout << "\tLa resta es: " << num - num2 << endl;
	cout << "\tLa multiplicacion es: " << num * num2 << endl;
	cout << "\tLa division es: " << num / num2 << endl;
}
int main() {
	while (true) {
		string op;
		cout << "Escoja si desea operaciones con: \n\t1.Numeros enteros \n\t2.Numeros decimales: " << endl;
		cin >> op;
		if (op == "1") {
			int a, b;
			cout << "Ingrese el primer numero entero: " << endl;
			cin >> a;
			cout << "Ingrese el segundo numero entero: " << endl;
			cin >> b;
			operaciones<int>(a, b);
			break;
		}
		else if (op == "2") {
			float a, b;
			cout << "Ingrese el primer numero decimal: " << endl;
			cin >> a;
			cout << "Ingrese el segundo numero decimal: " << endl;
			cin >> b;
			operaciones<float>(a, b);
			break;
		}
		else {
			cout << "Valor incorrecto. Vuelva a intentarlo. " << endl;
		}
	}
	return 0;
}

