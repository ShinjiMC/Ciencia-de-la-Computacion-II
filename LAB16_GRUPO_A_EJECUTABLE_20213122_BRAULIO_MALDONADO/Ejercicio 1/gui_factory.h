#pragma once
#include "win_checkbox.h"
#include "mac_checkbox.h"
class GUI_FACTORY {
public:
	virtual WINFACTORY* CrearControlW() const = 0;
	virtual MACFACTORY* CrearControlM() const = 0;
};