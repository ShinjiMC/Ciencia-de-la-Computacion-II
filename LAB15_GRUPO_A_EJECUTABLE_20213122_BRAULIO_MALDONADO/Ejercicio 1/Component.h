#pragma once
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
void Insertar(Component*& c2, std::string n, std::string c, int cant, std::string cl) {
	if (c2 == NULL) {
		c2 = crear(n, c, cant, cl);
	}
	else {
		std::cout << "Ya posee componente." << std::endl;
	}
}