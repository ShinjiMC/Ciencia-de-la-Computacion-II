#include<iostream>
#include<cmath>
#include<sstream>
#include "vector"
#include "string"
#include "iomanip"
using namespace std;
//By Braulio Nayap Maldonado Casilla
float rounds(float var) {
	float value = (int)(var * 100 + .5);
	return (float)value / 100;
}
void imprimirVectores(vector <float> x, vector <float> y) {
	cout << "\t" << setw(10) << "DatosX" << setw(5) << "|" << setw(10) << "DatosY" << endl;
	for (auto i = 0; i < x.size(); i++) {
		cout << "\t" << setw(10) << x[i] << setw(5) << "|" << setw(10) << y[i] << endl;
	}
}
class Suma {
private:
	vector <float> x;
public:
	Suma(vector <float> x2) {
		x = x2;
	}
	~Suma(){}
	float operator()(int pot) {
		float bo=0.0;
		for (auto i = 0; i < x.size(); i++) {
			bo = bo + (pow(x[i], pot));
		}
		return bo;
	}
};
class formB {
public:
	float operator()(vector <float> x, vector <float> y) {
		vector <float> xy;
		for (auto i = 0; i < x.size(); i++) {
			xy.push_back(x[i] * y[i]);
		}
		Suma sumaxy(xy);
		Suma xprom(x);
		Suma yprom(y);
		Suma sumax2(x);
		float b = (sumaxy(1) - (x.size() * (xprom(1) / x.size()) * (yprom(1) / x.size()))) / (sumax2(2) - (x.size() * (pow((xprom(1) / x.size()), 2))));
		return b;
	}
};
class formA {
public:
	float operator()(vector <float> x, vector <float> y) {
		formB b;
		Suma xprom(x);
		Suma yprom(y);
		float a = (yprom(1) / x.size()) - (b(x, y) * (xprom(1) / x.size()));
		return a;
	}
};
class formError {
public:
	float operator()(vector <float> x, vector <float> y) {
		formB b;
		formA a;
		vector <float> xy;
		for (auto i = 0; i < x.size(); i++) {
			xy.push_back(x[i] * y[i]);
		}
		Suma xprom(x);
		Suma yprom(y);
		Suma sumaxy(xy);
		float e = sqrt((yprom(2) - (a(x, y) * yprom(1)) - (b(x, y) * sumaxy(1))) / (x.size() - 2));
		return e;
	}
};

class formR {
public:
	float operator()(vector <float> x, vector <float> y) {
		formB b;
		formA a;
		vector <float> xy;
		for (auto i = 0; i < x.size(); i++) {
			xy.push_back(x[i] * y[i]);
		}
		Suma xprom(x);
		Suma yprom(y);
		Suma sumaxy(xy);
		float e = ((x.size() * sumaxy(1)) - (xprom(1) * yprom(1))) / sqrt((x.size() * xprom(2) - pow(xprom(1), 2)) * (x.size() * yprom(2) - pow(yprom(1), 2)));
		return e;
	}
};

class Regresion {
private:
	vector <float> x;
	vector <float> y;
public:
	Regresion(vector <float> x2, vector <float> y2) {
		x = x2;
		y = y2;
	}
	~Regresion(){}
	string operator()()const{
		formB b;
		formA a;
		formError e;
		formR r;
		std::stringstream resb;
		std::stringstream resa;
		std::stringstream rese;
		std::stringstream resr;
		std::stringstream resd;
		resb << rounds(b(x, y));
		resa << rounds(a(x, y));
		rese << rounds(e(x, y));
		resr << rounds(r(x, y));
		resd << rounds(pow(r(x, y), 2) * 100);
		string respuesta = "\n\tLa ecuacion de Regresion (Y=" + resa.str() + "+" + resb.str() + "x)\n\tteniendo como valor de a = " + resa.str() + " y el valor de b = " + resb.str() + "\n\tY posee un Error Estandar de " + rese.str() + " y un Coeficiente de Relacion de " + resr.str() + ".\n\tEn conclusion con el Coeficiente de Determinacion posee una variacion entre la variable dependiente (Y) de " + resd.str() + "%";
		return respuesta;
	}
};
void main() {
	vector <float> x = { 1,3,4,2,1,7 };
	vector <float> y = { 2,3,2.5,2,2,3.5 };
	imprimirVectores(x, y);
	Regresion respuesta(x, y);
	cout << respuesta() << endl;
	system("pause");
}
