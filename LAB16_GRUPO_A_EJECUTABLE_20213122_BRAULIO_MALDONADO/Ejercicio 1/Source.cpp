#include "Aplication.h"

int main() {
	std::cout << "Cliente: Windows ";
	Button* f1 = new Button();
	std::cout << std::endl;
	Aplication(*f1, 1); // 1 - Windows
	delete f1;
	std::cout << std::endl;
	std::cout << "Cliente: Mac ";
	std::cout << std::endl;
	Button* f2 = new Button();
	Aplication(*f2, 2); // 2 - Mac
	delete f2;
    return 0;
}