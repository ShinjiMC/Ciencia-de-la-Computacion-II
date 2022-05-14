#include<iostream>
#include "Cabecera.h"
//By Braulio Nayap Maldonado Casilla
using namespace std;
int main() {
    float x, y;
    cout << "Ingrese la altura del rectangulo: " << endl;
    cin >> x;
    cout << "Ingrese el ancho del rectangulo: " << endl;
    cin >> y;
    rectangulo r1 = rectangulo(y, x);
    r1.area();
    r1.perimetro();
    r1.~rectangulo();
    system("pause");
    return 0;
}
