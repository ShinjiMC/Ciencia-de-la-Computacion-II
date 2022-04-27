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
    int num,cant;
    cout << "Ingrese las cantidad de numeros para calcular la media: " << endl;
    cin >> cant;
    cout << "Ingrese los numeros: " << endl;
    vector <int > lista;
    for (int i = 0; i < cant; i++) {
        cin >> num;
        lista.push_back(num);
    }
    int media=0;
    for (int i = 0; i < cant; i++) {
        media = lista[i] + media;
    }
    media = media / cant;
    cout << "La media es: " <<media<< endl;
    return 0;
}
