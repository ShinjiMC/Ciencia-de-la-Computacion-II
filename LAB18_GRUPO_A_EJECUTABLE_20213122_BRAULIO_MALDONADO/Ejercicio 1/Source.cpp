#include<iostream>
using namespace std;
//By Braulio Nayap Maldonado Casilla
template <int N>
struct Digite {
	enum { 
		value = N%10 + Digite<N/10>::value
	};
};
template <>
struct Digite <0> {
	enum { value = 0 };
};
void main() {
	int x = Digite<91823705>::value;
	cout <<"La suma de los digitos es: " << x << endl;
	system("pause");
}
