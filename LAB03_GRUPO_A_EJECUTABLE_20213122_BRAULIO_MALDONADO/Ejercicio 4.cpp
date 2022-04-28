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
int primoes(int num) {
    int divisor = 1, divisores = 0, rpta = 0;
    do {
        if (num % divisor == 0) {
            divisores++;
        }
        divisor++;
    } while (divisor <= num);
    if (divisores == 2) {
        rpta = 1;
    }
    else {
        rpta = 0;
    }
    return rpta;
}
void primos(int x, int y) {
    for(x;x <= y;x++){
        if (primoes(x) == 1) {
            cout << x << " ";
        }
    }
}
int main() {
    int x=1, y;
    while (true) {
        cout << "Ingrese el numero limite para la busqueda de primos: " << endl;
        cin >> y;
        if (x < y) {
            break;
        }
        else {
            cout << "Debe ser mayor a " <<x<< endl;
        }
    }
    cout << "Los números primos comprendidos entre " << x << " y " << y <<" son:" << endl;
    primos(x, y);
    return 0;
}
