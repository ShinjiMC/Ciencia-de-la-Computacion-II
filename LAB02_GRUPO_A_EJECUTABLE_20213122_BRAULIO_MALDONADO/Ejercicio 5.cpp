#include<iostream>
#include <stdio.h>
#include <time.h>
#include <list>
#include <fstream>
#include <string>
#include <cstring>
#include <vector>
#include <climits>
#include <cstdlib>
#include <sstream>
#include <algorithm>
#include <ctime>
#include <Windows.h>
#include <cstdlib>
#include <cmath>
#include <iomanip>
//By Braulio Nayap Maldonado Casilla
using namespace std;
int main() {
    vector <int> lista;
    int cant, num;
    cout << "Ingrese la cantidad de numeros a calcular: " << endl;
    cin >> cant;
    cout << "Ingrese los numeros: " << endl;
    for (int i = 0; i < cant; i++) {
        cin >> num;
        lista.push_back(num);
    }
    int mayor = 0;
    for (int i = 0; i < cant; i++) {
        if (lista[i] > mayor) {
            mayor = lista[i];
        }        
    }
    int menor = mayor;
    for (int i = 0; i < cant; i++) {
        if (lista[i] < menor) {
            menor = lista[i];
        }
    }
    int media = 0;
    for (int i = 0; i < cant; i++) {
        media = lista[i] + media;
    }
    media = media / cant;
    cout << "El mayor numero es "<<mayor<< ", el menor numero es " << menor << " y la media es " << media << endl;
    return 0;
}
