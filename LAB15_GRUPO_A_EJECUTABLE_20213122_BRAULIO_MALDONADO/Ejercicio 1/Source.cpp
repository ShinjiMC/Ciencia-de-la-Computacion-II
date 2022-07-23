#include <iostream>
#include "Cliente.h"
//By Braulio Nayap Maldonado Casilla

int main() {
	Cliente* c1 = new Cliente();
	Prin(*c1);
	delete c1;	
    return 0;
}