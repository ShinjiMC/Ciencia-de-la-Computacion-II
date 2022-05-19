#pragma once
#include<iostream>
using namespace std;
class OperacionBase {
protected:
	int operador;
public:
	void set(int);
	int get();
};