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
    int num[5][3];
    cout << "Ingrese los 15 numeros enteros: " << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> num[i][j];
        }
    }
    int suma = 0;
    for (int i = 0; i < 5; i++) {
        if ((i + 1) % 2 == 0) {
            for (int j = 0; j < 3; j++) {
                suma = num[i][j] + suma;
            }
        }
    }
    cout << "La suma de los numeros de las filas pares es: "<<suma << endl;
    return 0;
}
