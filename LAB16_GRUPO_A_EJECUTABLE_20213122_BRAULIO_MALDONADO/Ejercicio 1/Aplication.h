#pragma once
#include "button.h"
#include "checkbox.h"
void Aplication(const GUI_FACTORY& f, int os) {
	const WINFACTORY* windows = f.CrearControlW();
	const MACFACTORY* mac = f.CrearControlM();
	const LINFACTORY* linux = f.CrearControlL();
	if (os == 1) {
		std::cout << windows->Draw() << std::endl;
	}
	else if(os==2) {
		std::cout << mac->Draw() << std::endl;
	}
	else if (os == 3) {
		std::cout << linux->Draw() << std::endl;
	}
	else {
		std::cout << "Sistema Operativo No Encontrado" << std::endl;
	}
	delete windows;
	delete mac;
	delete linux;
}