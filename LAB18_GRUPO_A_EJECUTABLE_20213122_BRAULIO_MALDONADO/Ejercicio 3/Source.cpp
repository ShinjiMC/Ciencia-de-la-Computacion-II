#include<iostream>
using namespace std;
//By Braulio Nayap Maldonado Casilla
template <int N,int p>
struct Potencia {
	enum {
		value = N * Potencia<N,p-1>::value
	};
};
template <int N>
struct Potencia <N,0> {
	enum { value = 1 };
};
void main() {
	int x = Potencia<12,4>::value;
	cout <<"Potencia de 12 a la 4 es : " << x << endl;
	system("pause");
}
