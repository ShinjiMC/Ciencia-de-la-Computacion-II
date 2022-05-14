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
#include <regex>
#include "Cabecera.h"
//By Braulio Nayap Maldonado Casilla
using namespace std;
int main() {
    string nombre, cui;
    float x, y, z;
    cout << "Ingrese el nombre del alumno: " << endl;
    getline(cin, nombre);
    cout << "Ingrese el CUI del alumno: " << endl;
    getline(cin, cui);
    cout << "Ingrese la primera nota parcial del alumno: " << endl; cin >> x;
    cout << "Ingrese la segunda nota parcial del alumno: " << endl; cin >> y;
    cout << "Ingrese la tercera nota parcial del alumno: " << endl; cin >> z;
    Alumno A1 = Alumno(cui, nombre, x, y, z);
    A1.mostrar();
    system("pause");
    return 0;
}