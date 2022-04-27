#include<iostream>
#include<list>
#include<cmath>
//By Braulio Nayap Maldonado Casilla
using namespace std;
int main() {
    cout << "Los números múltiplos de 5 comprendidos entre 1 y 100, son: " << endl;
    for (int i = 1; i < 101; i++) {
        if (i % 5 == 0)cout << i << " ";
    }
    return 0;
}
