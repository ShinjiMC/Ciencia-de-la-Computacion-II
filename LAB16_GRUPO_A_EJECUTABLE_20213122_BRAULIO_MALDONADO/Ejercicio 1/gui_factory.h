#pragma once
#include "win_checkbox.h"
#include "mac_checkbox.h"
#include "lin_checkbox.h"
class GUI_FACTORY {
public:
	virtual WINFACTORY* CrearControlW() const = 0;
	virtual MACFACTORY* CrearControlM() const = 0;
	virtual LINFACTORY* CrearControlL() const = 0;
};