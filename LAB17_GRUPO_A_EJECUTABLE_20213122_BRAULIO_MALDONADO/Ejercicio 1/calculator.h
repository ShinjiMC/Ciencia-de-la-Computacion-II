#pragma once
#include "iostream"
template <class T>
class data {
private:
	T a;
	T b;
public:
	data(T x, T y) {
		a = x;
		b = y;
	}
	T getA() {
		return a;
	}
	T getB() {
		return b;
	}
	T suma() {
		return a + b;
	}
	T resta() {
		return a - b;
	}
	T multiplicar() {
		return a * b;
	}
	T dividir() {
		return a / b;
	}
};
template <>
class data<std::string> {
private:
	std::string a;
	std::string b;
public:
	data(std::string x, std::string y) {
		a = x;
		b = y;
	}
	std::string getA() {
		return a;
	}
	std::string getB() {
		return b;
	}
	std::string suma() {
		return a + b;
	}
	std::string resta() {
		return "No se pueden restar oraciones";
	}
	std::string multiplicar() {
		return "No se pueden multiplicar oraciones";
	}
	std::string dividir() {
		return "No se puedn dividir oraciones";
	}
};
template <>
class data<char> {
private:
	char a;
	char b;
public:
	data(char x, char y) {
		a = x;
		b = y;
	}
	char getA() {
		return a;
	}
	char getB() {
		return b;
	}
	char suma() {
		return a + b;
	}
	char resta() {
		return a - b;
	}
	char multiplicar() {
		return a * b;
	}
	std::string dividir() {
		return "No se puedn dividir caracteres";
	}
};