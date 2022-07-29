#pragma once
#include "button.h"
#include "checkbox.h"
void Aplication(const GUI_FACTORY& f, int os) {
	const WINFACTORY* windows = f.CrearControlW();
	const MACFACTORY* mac = f.CrearControlM();
	if (os == 1) {
		std::cout << windows->Draw() << std::endl;
	}
	else if(os==2) {
		std::cout << mac->Draw() << std::endl;
	}
	delete windows;
	delete mac;
}