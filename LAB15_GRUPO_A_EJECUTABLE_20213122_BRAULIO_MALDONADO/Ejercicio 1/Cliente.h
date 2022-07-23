#pragma once
#include "BuilderEspecifico.h"
class Cliente {
private:
	IBuilder* builder;
public:
	void set_builder(IBuilder* builder) {
		this->builder = builder;
	}
	void BuildMenu() {
		std::string op;
		while (true) {
			std::cout << "------------------------MENU-INSERTAR-COMPONENTES------------------------" << std::endl;
			std::cout << "\t1. Ingresar Puerta \n\t2. Ingresar Llanta \n\t3. Ingresar Timon \n\t4. Ingresar Asientos \n\t5. Ingresar Motor \n\t6. Ingresar Espejos \n\t7. Ingresar Vidrios \n\t8. Ingresar Otro \n\t9. Salir al Menu Principal\nIngrese una opcion: " << std::endl;
			std::cin >> op;
			if (op == "1") {
				std::cout << "----------------------------------------------------" << std::endl;
				this->builder->ProducirPuerta();
			}
			else if (op == "2") {
				std::cout << "----------------------------------------------------" << std::endl;
				this->builder->ProducirLlanta();
			}
			else if (op == "3") {
				std::cout << "----------------------------------------------------" << std::endl;
				this->builder->ProducirTimon();
			}
			else if (op == "4") {
				std::cout << "----------------------------------------------------" << std::endl;
				this->builder->ProducirAsientos();
			}
			else if (op == "5") {
				std::cout << "----------------------------------------------------" << std::endl;
				this->builder->ProducirMotor();
			}
			else if (op == "6") {
				std::cout << "----------------------------------------------------" << std::endl;
				this->builder->ProducirEspejos();
			}
			else if (op == "7") {
				std::cout << "----------------------------------------------------" << std::endl;
				this->builder->ProducirVidrios();
			}
			else if (op == "8") {
				std::cout << "----------------------------------------------------" << std::endl;
				this->builder->ProducirOtros();
			}
			else if (op == "9") {
				std::cout << "----------------------------------------------------" << std::endl;
				break;
			}
			else {
				std::cout << "Valor Incorrecto. Vuelva a Intentarlo." << std::endl;
			}
		}
	}
};
void Prin(Cliente& c1) {
	BuilderEspecifico* VA = new BuilderEspecifico();
	c1.set_builder(VA);
	std::string op;
	while (true) {
		std::cout << "-------------------------MENU-PRINCIPAL---------------------------" << std::endl;
		std::cout << "\t1. Ingresar Componentes \n\t2. Mostrar Componentes \n\t3. Exportar Vehiculo \n\t4. Salir\nIngrese una opcion: " << std::endl;
		std::cin >> op;
		if (op == "1") {
			c1.BuildMenu();
		}
		else if (op == "2") {
			std::cout << "----------------------------------------------------" << std::endl;
			VA->GetProducto()->Lista();
		}
		else if (op == "3") {
			std::cout << "----------------------------------------------------" << std::endl;
			VA->ExportarDatos();
		}
		else if (op == "4") {
			std::cout << "Saliendo..." << std::endl;
			break;
		}
	}
	delete VA;
}