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
int main() {
    string password="contrasena";
    string usuario;
    while (true) {
        cout << "Ingrese la contrasena: ";
        cin >> usuario;
        if (usuario == password) {
            cout << "Iniciando sesion..." << endl;
            break;
        }
        else {
            cout << "Contrasena incorrecta." << endl;
        }
    }
    return 0;
}
