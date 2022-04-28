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
bool bisiesto(int num) {
    bool rpta;
    if (num % 4 == 0) {
        if (num % 100 == 0) {
            if (num % 400 == 0) {
                rpta = true;
            }
            else {
                rpta = false;
            }
        }
        else {
            rpta = true;
        }
    }
    else {
        rpta = false;
    }
    return rpta;
}
int main() {
    int year;
    cout << "Ingrese el año a caluclar si es bisiesto: " << endl;
    cin >> year;
    if (bisiesto(year)) {
        cout << "El año "<<year<<" es bisiesto." << endl;
    }
    else {
        cout << "El año " << year << " no es bisiesto." << endl;
    }
    return 0;
}
