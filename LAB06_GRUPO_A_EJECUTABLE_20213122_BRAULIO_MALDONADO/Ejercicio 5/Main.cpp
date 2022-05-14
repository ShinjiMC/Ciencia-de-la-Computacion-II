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
#include "Cabecera.h"
//By Braulio Nayap Maldonado Casilla
using namespace std;
int main() {
    matr m1 = matr();
    int num;
    cout << "Los datos de la matriz son: " << endl;
    m1.mostrar();
    cout << "Ingrese el numero a buscar: " << endl;
    cin >> num;
    m1.busqueda(num);
    return 0;
}
