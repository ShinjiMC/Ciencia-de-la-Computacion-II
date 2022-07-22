#include <iostream>
#include "vector"
//By Braulio Nayap Maldonado Casilla
struct Component {
	std::string name;
	std::string clase;
	int cantidad;
	std::string color;
};
Component* crear(std::string n, std::string c, int cant, std::string cl) {
	Component* nuevo = new(Component);
	nuevo->cantidad = cant;
	nuevo->clase = c;
	nuevo->color = cl;
	nuevo->name = n;
	return nuevo;
}
void MostrarComponent(Component* c) {
	if (c != NULL) {
		std::cout << "\t - " << c->cantidad << " " << c->name << "(s) de clase " << c->clase << " con color(es) " << c->color << std::endl;
	}
}
void Insertar(Component*&c2, std::string n, std::string c, int cant, std::string cl) {
	if (c2 == NULL) {
		c2 = crear(n, c, cant, cl);
	}
	else {
		std::cout << "Ya posee componente." << std::endl;
	}
}

class Vehiculo {
public:
	int n=0;
	Component** list = NULL;
	Vehiculo() {
		this->n++;
		this->list = new Component * [n];
		for (int i = 0; i < n; i++) {
			this->list[i] = NULL;
		}
	}
	~Vehiculo() {}
	void Lista()const {
		std::cout << "El automovil posee: " << std::endl;
		for(int i=0;i < n; i++) {
			MostrarComponent(this->list[i]);
		}
		std::cout << "\n\n";
	}
	void Insertar(Component* aux) {
		this->n=n++;
		Component** aux2 = new Component * [n];
		for (int i = 0; i < n; i++) {
			if (i == n-1) {
				aux2[i] = aux;
			}
			else {
				aux2[i] = list[i];
			}
		}
		this->list = aux2;
	}
};

class IBuilder {
public:
	virtual ~IBuilder(){}
	virtual void ProducirPuerta() const = 0;
	virtual void ProducirLlanta() const = 0;
	virtual void ProducirTimon() const = 0;
	virtual void ProducirAsientos() const = 0;
	virtual void ProducirMotor() const = 0;
	virtual void ProducirEspejos() const = 0;
	virtual void ProducirVidrios() const = 0;
	virtual void ProducirOtros() const = 0;
};

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
		int can=0;
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

int main() {
	Cliente* c1 = new Cliente();
	Prin(*c1);
	delete c1;	
    return 0;
}