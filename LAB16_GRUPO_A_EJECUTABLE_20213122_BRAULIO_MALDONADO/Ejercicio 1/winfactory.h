#pragma once
#include <iostream>
class WINFACTORY {
public:
	virtual ~WINFACTORY() {};
	virtual std::string Draw() const = 0;
};