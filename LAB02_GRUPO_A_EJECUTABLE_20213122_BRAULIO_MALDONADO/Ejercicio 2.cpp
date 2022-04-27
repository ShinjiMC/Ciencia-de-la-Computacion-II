#include<iostream>
#include<list>
#include<cmath>
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
int main() {
    int a = 1, i = 2;
    cout << "Los primeros 50 números primos son: " << endl;
    while (true) {
        if (primoes(i) == 1) {
            cout << i << " . ";
            i++;
            a++;
            if (a > 50)break;
        }
        else { i++; }
    }
    return 0;
}
