#ifndef STRATEGY
#include "Population.h"

class Strategy {
public:
	Strategy() {};
	virtual void metod(Population &obj) = 0;
};
#endif // !STRATEGY

