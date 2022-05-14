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
    vector <int> a;
    string rp;
    arraya a1 = arraya(a);
    while (true) {
        cout << "1. Ingresar un valor \n2. Extraer un valor \n3. Mostrar Arreglo \n4. Salir" << endl;
        cin >> rp;
        if (rp == "1") {
            int num;
            cout << "Ingrese un numero: " << endl;
            cin >> num;
            a1.ingresar(num);
        }
        else if (rp == "2") {
            int num;
            cout << "Ingrese un numero: " << endl;
            cin >> num;
            a1.sacar(num);
        }
        else if (rp == "3") {
            a1.Mostrar();
        }
        else if (rp == "4") {
            break;
        }
        else {
            cout << "Valor incorrecto, vuelva a intntarlo." << endl;
        }
    }


    return 0;
}
