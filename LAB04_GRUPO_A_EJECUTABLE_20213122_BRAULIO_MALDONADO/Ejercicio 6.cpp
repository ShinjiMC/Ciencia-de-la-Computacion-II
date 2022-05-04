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
int mayor(int suma[3]) {
    int may = 0;
    int ind = 0;
    for (int i = 0; i < 3; i++) {
        if (may < suma[i]) {
            may = suma[i];
            ind = i;
        }
    }
    return ind;
}
int main() {
    int numbers[3][3];
    int suma[3];
    cout << "Ingrese los 9 numeros a calcular: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> numbers[i][j];
        }
    }
    for (int i = 0; i < 3; i++) {
        int sum = 0;
        for (int j = 0; j < 3; j++) {
            sum = numbers[i][j] + sum;
        }
        suma[i] = sum;
    }
    int ind = mayor(suma);
    cout << "La fila que tiene la mayor suma es: " << endl;
    for(int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == ind) {
                cout << numbers[i][j] << " ";
            }
        }
    }
    return 0;
}
