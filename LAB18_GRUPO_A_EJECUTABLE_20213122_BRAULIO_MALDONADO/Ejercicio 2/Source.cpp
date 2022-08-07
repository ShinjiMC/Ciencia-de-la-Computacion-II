#include<iostream>
using namespace std;
//By Braulio Nayap Maldonado Casilla
template <int N>
struct Fibonacci {
	enum { 
		value = Fibonacci<N-1>::value + Fibonacci<N - 2>::value
	};
};
template <>
struct Fibonacci <0> {
	enum { value = 0 };
};
template <>
struct Fibonacci <1> {
	enum { value = 1 };
};
void main() {
	int x = Fibonacci<13>::value;
	cout <<"El valor posicionado en 13 de la Serie Fibonacci es: " << x << endl;
	system("pause");
}
