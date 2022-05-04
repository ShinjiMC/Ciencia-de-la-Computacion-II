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
void columna(int numbers[3][3]) {
    int back[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            back[i][j] = numbers[i][j];
        }
    }
    string op;
    cout << "Mover columna hacia derecha o izquierda (D/I): " << endl;
    cin >> op;
    if (op == "D") {
        int ar;
        cout << "Indique la columna del 1 al 3: " << endl;
        cin >> ar;
        if (ar == 1) {
            for (int i = 0; i < 3; i++) {
                numbers[i][1] = back[i][0];
                numbers[i][0] = back[i][1];
            }
        }
        else if (ar == 2) {
            for (int i = 0; i < 3; i++) {
                numbers[i][2] = back[i][1];
                numbers[i][1] = back[i][2];
            }
        }
        else if (ar == 3) {
            for (int i = 0; i < 3; i++) {
                numbers[i][0] = back[i][2];
                numbers[i][2] = back[i][0];
            }
        }
        
    }
    else if (op == "I") {
        int ar;
        cout << "Indique la columna del 1 al 3: " << endl;
        cin >> ar;
        if (ar == 1) {
            for (int i = 0; i < 3; i++) {
                numbers[i][0] = back[i][2];
                numbers[i][2] = back[i][0];
            }
        }
        else if (ar == 2) {
            for (int i = 0; i < 3; i++) {
                numbers[i][1] = back[i][0];
                numbers[i][0] = back[i][1];
            }
        }
        else if (ar == 3) {
            for (int i = 0; i < 3; i++) {
                numbers[i][2] = back[i][1];
                numbers[i][1] = back[i][2];
            }
        }
    }
}
void fila(int numbers[3][3]) {
    int back[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            back[i][j] = numbers[i][j];
        }
    }
    string op;
    cout << "Mover columna hacia arriba o abajo (A/B): " << endl;
    cin >> op;
    if (op == "B") {
        int ar;
        cout << "Indique la fila del 1 al 3: " << endl;
        cin >> ar;
        if (ar == 1) {
            for (int i = 0; i < 3; i++) {
                numbers[1][i] = back[0][i];
                numbers[0][i] = back[1][i];
            }
        }
        else if (ar == 2) {
            for (int i = 0; i < 3; i++) {
                numbers[2][i] = back[1][i];
                numbers[1][i] = back[2][i];
            }
        }
        else if (ar == 3) {
            for (int i = 0; i < 3; i++) {
                numbers[0][i] = back[2][i];
                numbers[2][i] = back[0][i];
            }
        }

    }
    else if (op == "A") {
        int ar;
        cout << "Indique la fila del 1 al 3: " << endl;
        cin >> ar;
        if (ar == 1) {
            for (int i = 0; i < 3; i++) {
                numbers[0][i] = back[2][i];
                numbers[2][i] = back[0][i];
            }
        }
        else if (ar == 2) {
            for (int i = 0; i < 3; i++) {
                numbers[1][i] = back[0][i];
                numbers[0][i] = back[1][i];
            }
        }
        else if (ar == 3) {
            for (int i = 0; i < 3; i++) {
                numbers[2][i] = back[1][i];
                numbers[1][i] = back[2][i];
                
            }
        }
    }
}
void show(int numbers[3][3]) {
    cout << "la matriz es: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << numbers[i][j] << " ";
        }
        cout << endl;
    }
}
int main() {
    int numbers[3][3];
    cout << "Ingrese los 9 numeros a almacenar: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> numbers[i][j];
        }
    }
    string men;
    while (true) {
        cout << "Menu: \n\t1. Mover Columna\n\t2. Mover Fila\n\t3. Mostrar\n\t4. Salir\nIngrese el numero de la opcion:" << endl;
        cin >> men;
        if (men == "1") {
            columna(numbers);
        }
        else if (men == "2") {
            fila(numbers);
        }
        else if (men == "3") {
            show(numbers);
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
