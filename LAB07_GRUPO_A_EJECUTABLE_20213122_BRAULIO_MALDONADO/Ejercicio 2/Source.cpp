#include<iostream>
#include<string.h>
#include "stdio.h"
#include "Heredar.h"
#include "string"
#include "Cabecera.h"
//By Braulio Nayap Maldonado Casilla
using namespace std;
int main() {
    Objestos A1;
    A1.cargar3();
    cout << endl;
    A1.cargar2();
    cout << endl;
    A1.cargar1();
    cout << endl;
    A1.Mostrar();
    system("pause");
    return 0;
}
