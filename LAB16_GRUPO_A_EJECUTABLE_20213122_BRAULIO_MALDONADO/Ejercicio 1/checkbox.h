#pragma once
#include "gui_factory.h"
class Checkbox : public GUI_FACTORY {
	WINFACTORY* CrearControlW() const override {
		return new WinCheckBox();
	}
	MACFACTORY* CrearControlM() const override {
		return new MacCheckBox();
	}
	LINFACTORY* CrearControlL() const override {
		return new LinCheckBox();
	}
};

