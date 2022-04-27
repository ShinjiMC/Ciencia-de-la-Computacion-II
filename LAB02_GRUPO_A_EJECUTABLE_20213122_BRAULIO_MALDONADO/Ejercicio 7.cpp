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
    int cant;
    cout << "Ingrese la cantidad de estudiantes: " << endl;
    cin >> cant;
    vector<vector<int> > notas(cant, vector<int>(3, 0));
    int nota;
    for (int i = 1; i < (cant + 1);i++) {
        cout << "Ingrese las notas del estudiante nro." <<i<< endl;
        for (int j = 0; j < 3; j++) {
            cin >> nota;
            notas[i-1][j] = nota;
        }
        cout << endl;
    }

    vector<int>promedios;
    int promedio;
    for (int i = 1; i < (cant + 1); i++) {
        promedio = (notas[i-1][0] + notas[i-1][1] + notas[i-1][2])/3;
        promedios.push_back(promedio);
    }
    for (int i = 1; i < (cant + 1); i++) {
        cout << "Notas del estudiante nro." << i << endl;
        for (int j = 0; j < 3; j++) {
            cout << notas[i-1][j] << " ";
        }
        cout << endl;
    }
    for (int i = 1; i < (cant + 1); i++) {
        cout << "Promedio del estudiante nro." << i <<" es " << promedios[i-1] << endl;
    }
    return 0;
}
