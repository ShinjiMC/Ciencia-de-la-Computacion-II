#include<iostream>
using namespace std;
//By Braulio Nayap Maldonado Casilla
template <int N>
struct Bin {
	string cad[2] = { "0", "1" };
	Bin<N / 2> k;
	string value = k.value + cad[N % 2];
};
template <>
struct Bin <0> {
	string value = "";
};
void main() {
	Bin<738464758> j;
	cout << "738464758 a hexadecimal es " << j.value << endl;
	system("pause");
}
