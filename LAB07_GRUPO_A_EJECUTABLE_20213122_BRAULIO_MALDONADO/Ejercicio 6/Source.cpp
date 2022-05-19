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
#include "Heredar.h"
//By Braulio Nayap Maldonado Casilla
using namespace std;
int main() {
    while (true) {
        string op;
        cout << "Sobre que ave desea conocer: \n\t1. Ganso \n\t2. Pato\n\t3. Gallina \n\t4. Salir" << endl;
        cin >> op;
        if (op == "1") {
            Ganso A1;
            A1.crear();
            A1.mostrar();
        }
        else if (op == "2") {
            Pato A1;
            A1.crear();
            A1.mostrar();
        }
        else if (op == "3") {
            Gallina A1;
            A1.crear();
            A1.mostrar();
        }
        else if (op == "4") {
            break;
        }
        else {
            cout << "Valor Incorrecto" << endl;
        }
    }
    return 0;
}
