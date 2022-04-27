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
    string palabra;
    cout << "Ingrese una palabra: " << endl;
    cin >> palabra;
    string Reversa(palabra.rbegin(), palabra.rend());
    for (int i = 0; i < palabra.size(); i++) {
        cout << Reversa[i] << endl;
    }
    return 0;
}
