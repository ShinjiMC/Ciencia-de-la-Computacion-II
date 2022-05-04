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
    string Nombres[3]; string Apellidos[3]; string edades[3]; string Dnis[3];
    for (int i = 0; i < 3; i++) {
        cout << "Datos del usuario nro. "<<i+1 << endl;
        cout << "Ingrese el primer nombre: " << endl;
        cin >> Nombres[i];
        cout << "Ingrese el primer apellido: " << endl;
        cin >> Apellidos[i];
        cout << "Ingrese la edad: " << endl;
        cin >> edades[i];
        cout << "Ingrese el DNI: " << endl;
        cin >> Dnis[i];
    }
    cout << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Usuario nro. " << i + 1 <<" - "<<Nombres[i] << " - " << Apellidos[i] << " - " << edades[i] << " - " << Dnis[i] << endl;
    }
    return 0;
}
