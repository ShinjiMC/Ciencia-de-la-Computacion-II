#include<iostream>
#include<list>
#include<cmath>
//By Braulio Nayap Maldonado Casilla
using namespace std;
int main() {
    string nombre, apep, apem,correo;
    string arroba = "@unsa.edu.pe";
    cout << "Ingrese su nombre en minúsculas: " << endl;
    cin >> nombre;
    cout << "Ingrese su apellido paterno en minúsculas: " << endl;
    cin >> apep;
    cout << "Ingrese su apellido materno en minúsculas: " << endl;
    cin >> apem;
    char nombre1 = nombre[0];
    char apem1 = apem[0];
    string nombre2(1, nombre1);
    string apem2(1, apem1);
    correo += nombre2;
    correo += apep;
    correo += apem2;
    correo += arroba;
    cout << "Su correo generado es: " << correo << endl;
    return 0;
}
