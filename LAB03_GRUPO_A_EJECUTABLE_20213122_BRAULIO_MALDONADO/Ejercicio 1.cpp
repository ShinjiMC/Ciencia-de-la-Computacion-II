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
int potencia(int num, int elev) {
    int result=1;
    for (int i = 0; i < elev; i++) {
        result = num * result;
    }
    return result;
}
int main() {
    int num, elev;
    cout <<"Ingrese el número a potenciar: " << endl;
    cin >> num;
    cout << "Ingrese la potencia: " << endl;
    cin >> elev;
    cout << "El numero "<<num<<" elevado a "<<elev<<" da como resultado: "<<potencia(num,elev) << endl;
    return 0;
}
