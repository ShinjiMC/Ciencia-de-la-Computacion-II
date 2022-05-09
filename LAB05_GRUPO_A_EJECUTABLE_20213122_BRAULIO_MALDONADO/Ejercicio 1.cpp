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
    int x, y;
    cout << "Ingrese el primer numero: " << endl;
    cin >> x;
    cout << "Ingrese el segundo numero: " << endl;
    cin >> y;
    int* ptrx = &x;
    int* ptry = &y;
    int z = *ptrx;
    *ptrx = *ptry;
    *ptry=z;
    cout << "El primer numero ahora es " << x << " y el segundo es " << y << endl;

    
    return 0;
}
