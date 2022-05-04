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
int primoes(int num) {
    int divisor = 1, divisores = 0, rpta = 0;
    do {
        if (num % divisor == 0) {
            divisores++;
        }
        divisor++;
    } while (divisor <= num);
    if (divisores == 2) {
        rpta = 1;
    }
    else {
        rpta = 0;
    }
    return rpta;
}
int primos(int x, int y) {
    int num=0;
    for(x;x <= y;x++){
        if (primoes(x) == 1) {
            num ++;
        }
    }
    return num;
}
int main() {
    int lista[50];
    int num = primos(1, 100);
    int j = 0;
    for (int i = 1; i <= 100; i++) {
        if (primoes(i) == 1) {
            lista[j] = i;
            j++;
        }
    }
    cout << "La lista de numeros primos del 1 al 100 son: " << endl;
    for (int i = num-1; 0 < i; i--) {
        cout << "\t" << lista[i] << endl;
    }

    return 0;
}
