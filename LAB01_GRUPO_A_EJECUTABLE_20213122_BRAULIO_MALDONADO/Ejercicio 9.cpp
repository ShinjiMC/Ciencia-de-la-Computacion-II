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
    int suma=0;
    int valor;
    cout << "Ingrese 10 numeros enteros entre positivos y negativos: " << endl;
    for (int i = 0; i < 10; i++) {
        cin >> valor;
        if (valor < 0) {
            suma = valor + suma;
        }
    }
    cout <<"La suma es: " << suma << endl;
    return 0;
}