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
void alta(string productos[10], string precios[10], int cantidad[10]) {
    int indicador = 0;
    for (int i = 0; i < 10; i++) {
        if (cantidad[i] == '\0') {
            indicador = i;
            break;
        }
    }
    cout << "Ingrese el nombre del producto: ";
    cin >> productos[indicador];
    cout << "Ingrese el precio del producto: ";
    cin >> precios[indicador];
    cout << "Ingrese la cantidad en stock del producto: ";
    cin >> cantidad[indicador];
}
void buscar(string productos[10], string precios[10], int cantidad[10]) {
    string nombre;
    cout << "Ingrese el nombre del producto a buscar: ";
    cin >> nombre;
    for (int i = 0; i < 10; i++) {
        if (cantidad[i] == '\0') {
            cout << "El producto ingresado no existe." << endl;
            break;
        }
        else if (productos[i]==nombre) {
            cout << "El producto " << nombre << " tiene un precio de S/." << precios[i] << " tiene un stock de " << cantidad[i] << endl;
        }
    }
}
void modificar(string productos[10], string precios[10], int cantidad[10]) {
    string nombre;
    cout << "Ingrese el nombre del producto a modificar su precio y cantidad: ";
    cin >> nombre;
    for (int i = 0; i < 10; i++) {
        if (cantidad[i] == '\0') {
            cout << "El producto ingresado no existe." << endl;
            break;
        }
        else if (productos[i] == nombre) {
            cout << "El producto " << nombre << " tiene un precio de S/." << precios[i] << " tiene un stock de " << cantidad[i] << endl;
            cout << "Ingrese el nuevo precio del producto: ";
            cin >> precios[i];
            cout << "Ingrese la nueva cantidad en stock del producto: ";
            cin >> cantidad[i];
            cout << "Los datos fueron actualizados." << endl;
        }
    }

}
int main() {
    string productos[10];
    string precios[10];
    int cantidad[10];
    string men;
    while (true) {
        cout << "Menu: \n\t1. Ingresar producto nuevo\n\t2. Buscar datos de un producto\n\t3. Modificar precio y stock de un producto\n\t4. Salir\nIngrese el numero de la opcion:" << endl;
        cin >> men;
        if (men == "1") {
            alta(productos, precios, cantidad);
        }
        else if (men == "2") {
            buscar(productos, precios, cantidad);
        }
        else if (men == "3") {
            modificar(productos, precios, cantidad);
        }
        else if (men == "4") {
            break;
        }
        else {
            cout << "Valor incorrecto." << endl;
        }
    }
    return 0;
}
