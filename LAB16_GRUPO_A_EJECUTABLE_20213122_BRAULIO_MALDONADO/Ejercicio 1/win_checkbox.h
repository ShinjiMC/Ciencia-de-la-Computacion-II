#pragma once
#include "winfactory.h"
class WinButton : public WINFACTORY {
public:
	std::string Draw() const override {
		return "Dibujando Button Windows";
	}
};
class WinCheckBox : public WINFACTORY {
public:
	std::string Draw() const override {
		return "Dibujando Checkbox Windows";
	}
};

