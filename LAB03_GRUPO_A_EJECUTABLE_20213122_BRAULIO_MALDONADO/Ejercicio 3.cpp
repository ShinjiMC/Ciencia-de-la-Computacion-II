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
void edad(string nac, string act) {
    string dian, mesn, yearn, diac, mesc, yearc;
    dian += nac[0];
    dian += nac[1];
    mesn += nac[3];
    mesn += nac[4];
    yearn += nac[6];
    yearn += nac[7];
    yearn += nac[8];
    yearn += nac[9];

    diac += act[0];
    diac += act[1];
    mesc += act[3];
    mesc += act[4];
    yearc += act[6];
    yearc += act[7];
    yearc += act[8];
    yearc += act[9];

    int dn = stoi(dian);
    int mn = stoi(mesn);
    int yn = stoi(yearn);

    int dc = stoi(diac);
    int mc = stoi(mesc);
    int yc = stoi(yearc);

    int dias=0, meses=0, years=0;
    while (true) {
        if (dn == 32) {
            dn = 1;
            meses = meses - 1;
        }
        else if (dn == dc) {
            break;
        }
        else {
            dn++;
            dias++;
        }
    }
    while (true) {
        if (mn == 13) {
            mn = 1;
            years = years - 1;
        }
        else if (mn == mc) {
            break;
        }
        else {
            mn++;
            meses++;
        }
    }
    while (true) {
        if (yn == yc) {
            break;
        }
        else {
            yn++;
            years++;
        }
    }
    cout << "Tiene " <<dias<<" dias, "<<meses<<" meses y " <<years<<" años de edad." << endl;
}
int main() {
    string nac, act;
    cout << "Ingrese la fecha de nacimiento (en formato DD:MM:YYYY) : " << endl;
    cin >> nac;
    cout << "Ingrese la fecha de actual (en formato DD:MM:YYYY) : " << endl;
    cin >> act;
    edad(nac, act);
    return 0;
}
