#pragma once
#include "gui_factory.h"
class Button : public GUI_FACTORY {
	WINFACTORY* CrearControlW() const override {
		return new WinButton();
	}
	MACFACTORY* CrearControlM() const override {
		return new MacButton();
	}
};
