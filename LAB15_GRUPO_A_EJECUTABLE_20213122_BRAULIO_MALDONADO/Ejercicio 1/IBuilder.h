#pragma once
class IBuilder {
public:
	virtual ~IBuilder() {}
	virtual void ProducirPuerta() const = 0;
	virtual void ProducirLlanta() const = 0;
	virtual void ProducirTimon() const = 0;
	virtual void ProducirAsientos() const = 0;
	virtual void ProducirMotor() const = 0;
	virtual void ProducirEspejos() const = 0;
	virtual void ProducirVidrios() const = 0;
	virtual void ProducirOtros() const = 0;
};