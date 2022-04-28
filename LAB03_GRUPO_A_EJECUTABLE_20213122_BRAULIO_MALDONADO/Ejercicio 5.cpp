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
bool Ingresarx(int x) {
    bool rpta;
    if (0 <= x && x <= 100) {
        rpta = true;
    }
    else { rpta = false; }
    return rpta;
}
bool par(int x) {
    bool rpta;
    if ((x % 2) == 0){
        rpta = true;
    }
    else{ rpta = false; }
    return rpta;
}
int sumarimpar(int x) {
    int suma = 0;
    for (int i = 0; i <= x; i++) {
        if (par(i) == false) {
            suma = suma + i;
        }
    }
    return suma;
}
int main() {
    int x;
    while (true) {
        cout << "Ingrese un número: " << endl;
        cin >> x;
        if (Ingresarx(x) == true) {
            if (par(x) == true) {
                break;
            }
            else {
                cout << "El numero debe ser par, vuelva a intentarlo. " << endl;
            }
        }
        else {
            cout << "El numero debe estar entre 0 y 100, vuelva a intentarlo. " << endl;
        }
    }
    cout << "suma de numeros impares entre 0 y "<<x<< " es " << sumarimpar(x) << endl;
    return 0;
}
