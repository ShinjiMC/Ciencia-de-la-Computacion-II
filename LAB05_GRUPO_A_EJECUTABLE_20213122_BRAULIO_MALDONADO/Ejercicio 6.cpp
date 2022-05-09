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
void sumar(int a, int b) {
    cout <<a<< " + " <<b<<" = "<<a+b << endl;
}
void restar(int a, int b) {
    cout << a << " - " << b << " = " << a - b << endl;
}
void multiplicar(int a, int b) {
    cout << a << " * " << b << " = " << a * b << endl;
}
void dividir(int a, int b) {
    cout << a << " / " << b << " = " << a / b << endl;
}
int main() {
    int a, b;
    void (*funciones[4]) (int, int) = { sumar, restar, multiplicar, dividir };
    cout << "Ingresa el primer numero: " << endl;
    cin >> a;
    cout << "Ingresa el segundo numero: " << endl;
    cin >> b;
    for (int i = 0; i < 4; i++) {
        funciones[i](a, b);
    }
    return 0;
}
