#pragma once
#include <iostream>
#include "IBuilder.h"
#include "Vehiculo.h"
class BuilderEspecifico : public IBuilder {
private:
	Vehiculo* v1;
public:
	BuilderEspecifico() {
		this->Reset();
	}
	~BuilderEspecifico() {
		delete v1;
	}
	void Reset() {
		this->v1 = new Vehiculo();
	}
	void ProducirPuerta()const override {
		Component* aux = NULL;
		std::string name = "Puerta";
		std::string clas;
		std::cout << "Ingrese la clase de la puerta: " << std::endl;
		std::cin >> clas;
		std::string col;
		std::cout << "Ingrese el color de la puerta: " << std::endl;
		std::cin >> col;
		int can = 0;
		while (true) {
			std::cout << "Ingrese la cantidad de puertas (en numeros): " << std::endl;
			std::cin >> can;
			if (can > 0) {
				break;
			}
			else {
				std::cout << "Valor Incorrecto. Vuelva a Intentarlo." << std::endl;
			}
		}
		Insertar(aux, name, clas, can, col);
		this->v1->Insertar(aux);
	}
	void ProducirLlanta()const override {
		Component* aux = NULL;
		std::string name = "Llantas";
		std::string clas;
		std::cout << "Ingrese la clase de las Llantas: " << std::endl;
		std::cin >> clas;
		std::string col;
		std::cout << "Ingrese el color de las Llantas: " << std::endl;
		std::cin >> col;
		int can = 0;
		while (true) {
			std::cout << "Ingrese la cantidad de Llantas (en numeros): " << std::endl;
			std::cin >> can;
			if (can > 0) {
				break;
			}
			else {
				std::cout << "Valor Incorrecto. Vuelva a Intentarlo." << std::endl;
			}
		}
		Insertar(aux, name, clas, can, col);
		this->v1->Insertar(aux);
	}
	void ProducirTimon()const override {
		Component* aux = NULL;
		std::string name = "Timon";
		std::string clas;
		std::cout << "Ingrese la clase del Timon: " << std::endl;
		std::cin >> clas;
		std::string col;
		std::cout << "Ingrese el color del Timon: " << std::endl;
		std::cin >> col;
		int can = 1;
		Insertar(aux, name, clas, can, col);
		this->v1->Insertar(aux);
	}
	void ProducirAsientos()const override {
		Component* aux = NULL;
		std::string name = "Asientos";
		std::string clas;
		std::cout << "Ingrese la clase del Asiento: " << std::endl;
		std::cin >> clas;
		std::string col;
		std::cout << "Ingrese el color del Asiento: " << std::endl;
		std::cin >> col;
		int can = 0;
		std::cout << "Ingrese la cantidad de Asientos (en numeros): " << std::endl;
		std::cin >> can;
		Insertar(aux, name, clas, can, col);
		this->v1->Insertar(aux);
	}
	void ProducirMotor()const override {
		Component* aux = NULL;
		std::string name = "Motor";
		std::string clas;
		std::cout << "Ingrese la clase del Motor: " << std::endl;
		std::cin >> clas;
		std::string col;
		std::cout << "Ingrese el color del Motor: " << std::endl;
		std::cin >> col;
		int can = 1;
		Insertar(aux, name, clas, can, col);
		this->v1->Insertar(aux);
	}
	void ProducirEspejos()const override {
		Component* aux = NULL;
		std::string name = "Espejos";
		std::string clas;
		std::cout << "Ingrese la clase del Espejo: " << std::endl;
		std::cin >> clas;
		std::string col;
		std::cout << "Ingrese el color del Espejo: " << std::endl;
		std::cin >> col;
		int can = 0;
		while (true) {
			std::cout << "Ingrese la cantidad de Espejos (en numeros): " << std::endl;
			std::cin >> can;
			if (can > 0) {
				break;
			}
			else {
				std::cout << "Valor Incorrecto. Vuelva a Intentarlo." << std::endl;
			}
		}
		Insertar(aux, name, clas, can, col);
		this->v1->Insertar(aux);
	}
	void ProducirVidrios()const override {
		Component* aux = NULL;
		std::string name = "Vidrios";
		std::string clas;
		std::cout << "Ingrese la clase del Vidrio: " << std::endl;
		std::cin >> clas;
		std::string col;
		std::cout << "Ingrese el color del Vidrio: " << std::endl;
		std::cin >> col;
		int can = 0;
		while (true) {
			std::cout << "Ingrese la cantidad de Vidrios (en numeros): " << std::endl;
			std::cin >> can;
			if (can > 0) {
				break;
			}
			else {
				std::cout << "Valor Incorrecto. Vuelva a Intentarlo." << std::endl;
			}
		}
		Insertar(aux, name, clas, can, col);
		this->v1->Insertar(aux);
	}
	void ProducirOtros()const override {
		Component* aux = NULL;
		std::string name;
		std::cout << "Ingrese el nombre del Componente: " << std::endl;
		std::cin >> name;
		std::string clas;
		std::cout << "Ingrese la clase de " + name + ": " << std::endl;
		std::cin >> clas;
		std::string col;
		std::cout << "Ingrese el color de " + name + ": " << std::endl;
		std::cin >> col;
		int can = 0;
		while (true) {
			std::cout << "Ingrese la cantidad de " + name + " (en numeros): " << std::endl;
			std::cin >> can;
			if (can > 0) {
				break;
			}
			else {
				std::cout << "Valor Incorrecto. Vuelva a Intentarlo." << std::endl;
			}
		}
		Insertar(aux, name, clas, can, col);
		this->v1->Insertar(aux);
	}
	Vehiculo* GetProducto() {
		Vehiculo* resultado = this->v1;
		return resultado;
	}
	void ExportarDatos() {
		Vehiculo* data = this->v1;
		std::cout << "Exportando datos..." << std::endl;
		data->Lista();
		this->Reset();
	}
};