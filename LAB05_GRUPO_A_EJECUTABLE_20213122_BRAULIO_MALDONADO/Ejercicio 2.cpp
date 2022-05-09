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
#include <regex>
//By Braulio Nayap Maldonado Casilla
using namespace std;
int main() {
    srand(time(NULL));
    for (int j = 0; j < 1000000; j++) {
        float* v1 = new float[3];
        float* v2 = new float[3];
        for (int i = 0; i < 3; i++) {
            v1[i] = 1 + rand() % (101 - 1);
            v2[i] = 1 + rand() % (101 - 1);
        }
        float prod = v1[0] * v2[0] + v1[1] * v2[1] + v1[2] * v2[2];
        cout <<j+1<< ".- El producto de los vectores es: " << prod << endl;
        delete[] v1;
        delete[] v2;
    }
    return 0;
}