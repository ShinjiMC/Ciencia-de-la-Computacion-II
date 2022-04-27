#include<iostream>
#include <random>
#include <stdlib.h>
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
//By Braulio Nayap Maldonado Casilla
using namespace std;
int main() {
    string hora;
    int minutos;
    cout << "Ingrese la hora (en formato HH:MM): " << endl;
    cin >> hora;
    string hour,min;
    hour += hora[0];
    hour += hora[1];
    min += hora[3];
    min += hora[4];
    int x = stoi(min);
    int y = stoi(hour);
    cout << "Ingrese los minutos a agregar: " << endl;
    cin >> minutos;
    x = x + minutos;
    while (true) {
        if (x > 60) {
            x = x - 60;
            y = y + 1;
            if (y > 23) {
                y = 0;
            }
        }
        else { break; }
    }
    if (12 <= y <= 23) {
        cout << y << ":" << x << "PM" << endl;
    }
    else{ cout << y << ":" << x << "AM" << endl; }
    return 0;
}
