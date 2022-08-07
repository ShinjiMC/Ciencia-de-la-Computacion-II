#include<iostream>
#include "vector"
using namespace std;
//By Braulio Nayap Maldonado Casilla
template <int N>
struct Hex {
	string cad[16] = { "0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "A", "B", "C", "D", "E", "F" };
	Hex<N / 16> k;
	string value = k.value + cad[N % 16];
};
template <>
struct Hex <0> {
	string value = "";
};
void main() {
	Hex<758506867> j;
	cout << "758506867 a hexadecimal es " << j.value << endl;
	system("pause");
}