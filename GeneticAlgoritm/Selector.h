#ifndef SELECTOR_H
#define SELECTOR_H

#include "Population.h"

class Selector {
public:
	Selector() {};
	std::pair<double, double> choiceParents () {
		return std::pair<double, double>((double)(rand() % 50), (double)(rand() % 50));
	};
};

#endif // !SELECTOR_H

