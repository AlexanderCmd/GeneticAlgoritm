#ifndef SELECTOR_H
#define SELECTOR_H

#include "Population.h"
#include "FitnessFunction.h"
#include "Strategy.h"

class Selector : public Strategy {
public:
	Selector() {};

	void sort(Population &obj) {
		std::qsort(population.begin, population.size, sizeof (Particle), FitnessFunction().comparatorMax);
	};
};

#endif // !SELECTOR_H

