#pragma once
#include "macfactory.h"
class MacButton : public MACFACTORY {
public:
	std::string Draw() const override {
		return "Dibujando Button Mac";
	}
	std::string draw(const WINFACTORY& colaborador) const override {
		const std::string result = colaborador.Draw();
		return "Dibujando Button Mac con ayuda de "+result;
	}
};
class MacCheckBox : public MACFACTORY {
public:
	std::string Draw() const override {
		return "Dibujando Checkbox Mac";
	}
	std::string draw(const WINFACTORY& colaborador) const override {
		const std::string result = colaborador.Draw();
		return "Dibujando Checkbox Mac con ayuda de " + result;
	}
};