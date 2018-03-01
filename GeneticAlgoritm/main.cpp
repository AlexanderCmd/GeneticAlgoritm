#include "Population.h"
#include "Reproduction.h"
#include "Mutator.h"
#include "Selector.h"
#include "FitnessFunction.h"

int 
main() {
	Population test;
	Reproduction r;
	Mutator m;
	FitnessFunction f;
	for (size_t i = 0; i < 100; ++i) {
		r.crossing(test);
		m.Mutation(test);
		f.sort(test);
	}
	std::cout << "Max function at x = " << test.print().getX() << " y = " << test.print().getY() << " and it is equal: "<< test.print().getZ() << std::endl;
	system("Pause");
	return 0;
}