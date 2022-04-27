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
void primos(int x, int y) {
    for(x;x <= y;x++){
        if (primoes(x) == 1) {
            cout << x << " . ";
        }
    }
}
int main() {
    int x, y;
    cout << "Ingrese el primer numero del intervalo: " << endl;
    cin >> x;
    while (true) {
        cout << "Ingrese el segundo numero del intervalo: " << endl;
        cin >> y;
        if (x < y) {
            break;
        }
        else {
            cout << "El segundo valor debe ser mayor a " <<x<< endl;
        }
    }
    cout << "Los números primos comprendidos entre " << x << " y " << y <<" son:" << endl;
    primos(x, y);
    return 0;
}
