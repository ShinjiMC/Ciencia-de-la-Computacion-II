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
    OperacionFactorial f1;
    int num;
    cout << "Ingrese el numero a factorizar: " << endl;
    cin >> num;
    f1.set(num);
    cout << "El factorial de "<<f1.get()<<" es "<<f1.devolverfact() << endl;
    return 0;
}
