#include<iostream>
#include<string.h>
#include "stdio.h"
#include "Heredar.h"
#include "string"
#include "Cabecera.h"
//By Braulio Nayap Maldonado Casilla
using namespace std;
int main() {
    string op;
    while (true) {
        cout << "Ingrese que operacion bancaria desea realizar: \n\t1. Crear Cuenta \n\t2. Solicitar Prestamo \n\t3. Salir" << endl;
        cin >> op;
        if (op == "1") {
            int yu = 1;
            while (yu == 1) {
                string op2;
                cout << "Ingrese que tipo de cuenta desea poseer: \n\t1. Cuenta Normal \n\t2. Cuenta Joven \n\t3. Retroceder" << endl;
                cin >> op2;
                if (op == "1") {
                    Cuenta C1 = Cuenta();
                    C1.imprimir();
                    yu = 0;
                }
                else if (op == "2") {
                    CuentaJoven C1 = CuentaJoven();
                    C1.imprimir();
                    yu = 0;
                }
                else if (op == "3") { yu = 0; }
                else { cout << "Valor incorrecto. Vuelva a intentarlo" << endl; }
            }
        }
        else if (op == "2") {
            int yu = 1;
            while (yu == 1) {
                string op2;
                cout << "Ingrese que medio de Prestamos desea solicitar: \n\t1. Prestamo \n\t2. Prestamo con apoyo de Hipoteca \n\t3. Retroceder" << endl;
                cin >> op2;
                if (op == "1") {
                    Prestamo C1 = Prestamo();
                    C1.imprimir();
                    yu = 0;
                }
                else if (op == "2") {
                    Hipoteca C1 = Hipoteca();
                    C1.imprimir();
                    yu = 0;
                }
                else if (op == "3") { yu = 0; }
                else { cout << "Valor incorrecto. Vuelva a intentarlo" << endl; }
            }
        }
        else if (op == "3") { break; }
        else { cout << "Valor incorrecto. Vuelva a intentarlo" << endl; }
    }
    system("pause");
    return 0;
}

