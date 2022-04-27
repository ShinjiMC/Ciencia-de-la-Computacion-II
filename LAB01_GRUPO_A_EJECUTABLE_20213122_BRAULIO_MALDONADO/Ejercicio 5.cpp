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
#include <iomanip>
using namespace std;
//By Braulio Nayap Maldonado Casilla
int main() {
    double floatd;
    int number;
    cout <<"Ingrese el número a redondear (con .): " << endl;
    cin >> floatd;
    cout << "Ingrese el número de decimales a redondear: " << endl;
    cin >> number;
    cout << "El número redondeado a dos decimales es: " <<fixed<<setprecision(number)<<floatd<< endl;
    return 0;
}
