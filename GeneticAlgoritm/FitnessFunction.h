#ifndef FITNESSFUNCTION_H
#define FITNESSFUNCTION_H

#include "Particle.h"
#include "Function.h"
#include <memory>   

class FitnessFunction {
	public:
	FitnessFunction() {};

	const int comparatorMax(const Particle *first, const Particle *second) {
		return (int) (Function().function_value(first->getX(), first->getY()) - Function().function_value(second->getX(), second->getY()));
	};
	
	const int comparatorMin(const Particle *second, const Particle *first) {
		return (int)(Function().function_value(first->getX(), first->getY()) - Function().function_value(second->getX(), second->getY()));
	};
};

#endif // !FITNESSFUNCTION_H

