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
void divisor(int num1, int num2) {
    if (num1 % num2 == 0) {
        cout << "El numero " <<num2<<" es divisor de "<<num1 << endl;
    }
}
int main() {
    int num1, num2;
    cout << "Ingrese el primer numero: " << endl;
    cin >> num1;
    cout << "Ingrese el segundo numero: " << endl;
    cin >> num2;
    divisor(num1, num2);
    divisor(num2, num1);
    return 0;
}
