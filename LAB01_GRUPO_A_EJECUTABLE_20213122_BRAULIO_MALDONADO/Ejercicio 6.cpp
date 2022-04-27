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
string Binario(int n){
    string r;
    while (n != 0) {
        if (n % 2 == 0) {
            r += "0";
        }
        else {
            r += "1";
        }
        n /= 2;
    }
    string rs(r.rbegin(),r.rend());
    return rs;
}
int main() {
    int numero;
    while (true) {
        cout << "Ingrese un numero entre 100 y 999: " << endl;
        cin >> numero;
        if (99 < numero && numero < 1000) {
            break;
        }
        else {
            cout << "Numero incorrecto. Vuelva a intentarlo " << endl;
        }
    }
    cout << "El numero " <<numero<<" en binario es "<<Binario(numero) << endl;
    return 0;
}
