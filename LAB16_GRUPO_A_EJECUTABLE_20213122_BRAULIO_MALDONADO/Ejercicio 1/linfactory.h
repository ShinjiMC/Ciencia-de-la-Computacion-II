#pragma once
#include "macfactory.h"
class LINFACTORY {
public:
	virtual ~LINFACTORY() {};
	virtual std::string Draw() const = 0;
	virtual std::string draw(const MACFACTORY& colaborador) const = 0;
};