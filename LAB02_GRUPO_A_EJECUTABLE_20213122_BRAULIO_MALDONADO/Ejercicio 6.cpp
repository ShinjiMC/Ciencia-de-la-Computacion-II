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
    int cant;
    int a = 0, b = 1,c;
    cout << "Ingrese hasta que valor se realice la serie Fibonacci: " << endl;
    cin >> cant;
    for (int i = 0; i < cant; i++) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}
