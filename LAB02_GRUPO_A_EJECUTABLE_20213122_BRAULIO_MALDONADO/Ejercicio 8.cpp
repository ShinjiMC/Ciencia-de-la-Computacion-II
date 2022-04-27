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
    int num;
    cout <<"Ingrese el numero para generar la tabla de multiplicar: " << endl;
    cin >> num;
    for (int i = 0; i < 13; i++) {
        cout <<num<< " x " <<i<<" = "<<num*i<< endl;
    }
    return 0;
}
