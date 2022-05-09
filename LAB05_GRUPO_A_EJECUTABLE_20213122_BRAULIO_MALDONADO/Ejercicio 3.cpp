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
struct lista {
    int num;
    lista* sig;
};
typedef struct lista* Numeros;
Numeros crear(int val) {
    Numeros Nums = new (struct lista);
    Nums->num = val;
    Nums->sig = NULL;
    return Nums;
}
void Insertar(Numeros& lista, int val) {
    if (lista == NULL) {
        lista = crear(val);
    }
    else {
        Insertar(lista->sig, val);
    }
}
void Mostrar(Numeros lista) {
    if (lista != NULL) {
        cout << lista->num << " ";
        Mostrar(lista->sig);
    }
}
void ordenarLista(Numeros lista){
    Numeros actual, siguiente;
    int t;
    actual = lista;
    while (actual->sig != NULL)
    {
        siguiente = actual->sig;

        while (siguiente != NULL)
        {
            if (actual->num > siguiente->num)
            {
                t = siguiente->num;
                siguiente->num = actual->num;
                actual->num = t;
            }
            siguiente = siguiente->sig;
        }
        actual = actual->sig;
        siguiente = actual->sig;

    }
}
int main() {
    Numeros lista = NULL;
    srand(time(NULL));
    for (int i = 0; i < 1000; i++) {
        int num = rand();
        Insertar(lista, num);
        ordenarLista(lista);
        cout <<i+1<< ".- ";
        Mostrar(lista);
        cout << endl;
    }
    return 0;
}
