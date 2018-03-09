#ifndef FUNCTIONVALUE
#define FUNCTIOVALUE

#include "Particle.h"
#include "Function.h"

class FunctionValue {
private:
	std::pair<Particle, double> FuncValue;
public:
	FunctionValue() {};

	FunctionValue(const Particle &obj, const double value) {
		FuncValue = std::pair<Particle, double>(obj, value);
	};

	FunctionValue(const double x, const double y, const double value) {
		FuncValue = std::pair<Particle, double>(Particle(x, y), value);
	};

	Particle getParticle() const { return FuncValue.first; };
	double getValue() const { return FuncValue.second; };
	
	void setParticle(const Particle &obj) { 
		this->FuncValue.first = obj;
		this->FuncValue.second = Function().function_value(obj.getX(), obj.getY());
	};

	void setValue(const double value) { this->FuncValue.second = value; };
	
	void setAll(const Particle &obj, const double value) {
		this->FuncValue.first = obj;
		this->FuncValue.second = value;
	};
};

#endif // !FUNCTIONVALUE

