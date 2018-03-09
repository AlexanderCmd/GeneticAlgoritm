#ifndef CHOICESTRATEGIA
#define CHOICESTRATEGIA

#include "Strategy.h"
#include <memory>

class ChoiceStrategia {
private:
	Strategy *strata;
public:
	ChoiceStrategia() {
		strata = NULL;
	};

	void setStrata(Strategy *obj) {
		strata = obj;
	};

	void use_metod(Population &obj) {
		strata->metod(obj);
	};

	ChoiceStrategia() {
		delete strata;
		strata = NULL;
	};
};

#endif // !CHOICESTRATEGIA
