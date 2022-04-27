#include<iostream>
#include<list>
#include<cmath>
//By Braulio Nayap Maldonado Casilla
using namespace std;
int main() {
    int suma = 0;
    for (int i = 0; i < 101; i++) {
        suma = i + suma; 
        i++;
    }
    cout <<"La suma de los números pares del 2 al 100 es " << suma << endl;
    return 0;
}
