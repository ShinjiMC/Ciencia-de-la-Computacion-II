#pragma once
#include "linfactory.h"
class LinButton : public LINFACTORY {
public:
	std::string Draw() const override {
		return "Dibujando Button Linux";
	}
	std::string draw(const MACFACTORY& colaborador) const override {
		const std::string result = colaborador.Draw();
		return "Dibujando Button Linux con ayuda de " + result;
	}
};
class LinCheckBox : public LINFACTORY {
public:
	std::string Draw() const override {
		return "Dibujando Checkbox Linux";
	}
	std::string draw(const MACFACTORY& colaborador) const override {
		const std::string result = colaborador.Draw();
		return "Dibujando Checkbox Linux con ayuda de " + result;
	}
};