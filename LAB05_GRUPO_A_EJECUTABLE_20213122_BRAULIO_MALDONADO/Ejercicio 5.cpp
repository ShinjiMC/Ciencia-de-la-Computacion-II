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
void concatena(char* a, char* b){
    while (*a){
        a++;
    }
    while (*b){
        *a = *b;
        a++;
        b++;
    }
    *a = '\0';
}
int main() {
    char v2[100], v1[100];
    cout << "Ingrese el primer caracter: " << endl;
    cin.getline(v2, 80);
    cout << "Ingrese el segundo caracter: " << endl;
    cin.getline(v1, 80);
    concatena(v1, v2);
    cout << "La concatenacion es: " << v1 << endl;
    return 0;
}
