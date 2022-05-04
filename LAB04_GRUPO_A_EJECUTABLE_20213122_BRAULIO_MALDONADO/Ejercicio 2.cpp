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
void busqueda(int num[8],int nub) {
    int alt = 0;
    for (int i = 0; i < 9; i++) {
        if (nub == num[i]) {
            cout << "El numero " <<nub<< " esta en la posicion "<<i+1<<" de la lista guardada." << endl;
            alt++;
        }
        else if(i==8) {
            if (alt < 1) {
                cout << "No se encontró el numero en la lista guardada." << endl;
            }
        }
    }
}
int main() {
    int numeros[8]; int nub;
    cout << "Ingrese los 8 numeros: " << endl;
    for (int i = 0; i < 8; i++) {
        cin >> numeros[i];
    }
    cout << "Ingrese el numero a buscar en la lista guardada: " << endl;
    cin >> nub;
    busqueda(numeros, nub);
    
    return 0;
}
