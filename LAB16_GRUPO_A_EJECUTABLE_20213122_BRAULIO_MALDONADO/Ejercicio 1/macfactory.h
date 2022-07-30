#pragma once
#include "winfactory.h"
class MACFACTORY {
public:
	virtual ~MACFACTORY() {};
	virtual std::string Draw() const = 0;
	virtual std::string draw(const WINFACTORY& colaborador) const = 0;
};
