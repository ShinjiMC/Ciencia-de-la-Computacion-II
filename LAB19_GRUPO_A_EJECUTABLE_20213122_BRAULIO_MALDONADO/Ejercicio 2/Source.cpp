#include<iostream>
#include "vector"
using namespace std;
template <typename T>
void imprimirVectores(vector <T> x) {
	if (x.size() == 0) {
		cout << "Lista Vacia" << endl;
	}
	else {
		for (auto i = 0; i < x.size(); i++) {
			cout << x[i] << " ";
		}
		cout << endl;
	}
}

template <typename T>
class FIND {
private:
	T* a;
public:
	FIND(T* aux) {
		a = aux;
	}
	~FIND(){}
	vector <int> operator()(int inicio,int ends,const T& caracter) {
		vector <int> res;
		for (int i = inicio; i <= ends;i++) {
			if (a[i] == caracter) {
				res.push_back(i);
			}
		}
		return res;
	}
};
void main() {
	int* a1 = new int[10]{ 1, 2, 3, 4, 3, 2, 4, 5, 2, 1 };
	FIND <int> lista1(a1);
	string* a2 = new string[10]{ "uno","dos","tres","cuatro","tres","dos","cuatro","cinco","dos","uno"};
	FIND <string> lista2(a2);
	cout << "Lista = { 1, 2, 3, 4, 3, 2, 4, 5, 2, 1 }" << endl;
	cout << "Los indice(s) de la lista (4 al 9) que tiene el elemento 2 son : ";
	imprimirVectores<int>(lista1(4, 9, 2));
	cout << endl;
	cout << "Lista = { uno,dos,tres,cuatro,tres,dos,cuatro,cinco,dos,uno}" << endl;
	cout << "Los indice(s) de la lista (0 al 9) que tiene el elemento uno son : ";
	imprimirVectores<int>(lista2(0, 9, "uno"));
}
