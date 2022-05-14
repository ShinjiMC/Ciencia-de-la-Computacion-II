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
    string name,act,nac;
    cout << "Ingrese su nombre: " << endl;
    getline(cin, name);
    cout << "Ingrese su fecha de nacimiento (en formato DD:MM:YYYY): " << endl;
    getline(cin, nac);
    cout << "Ingrese su fecha actual (en formato DD:MM:YYYY): " << endl;
    getline(cin, act);
    Persona P1 = Persona(act, nac, name, P1.edad(nac,act));
    P1.Mostrar();
    return 0;
}
