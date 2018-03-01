#ifndef FITNESSFUNCTION_H
#define FITNESSFUNCTION_H

#include "Population.h"

class FitnessFunction {
	public:
	FitnessFunction() {};

	void sort(Population &obj) {
		double max = 0;
		Particle tmp;
		for (size_t i = 0; i < 99; ++i) {
			max = i;
			for (size_t j = i + 1; j < 100; ++j) 
				if (obj.getParticle(j).getZ() > obj.getParticle(max).getZ())
					max = j;
			tmp = obj.getParticle(i);
			obj.setParticl(obj.getParticle(max), i);
			obj.setParticl(tmp, max);/*
				obj.getParticle(i).setAll(obj.getParticle(max));
				obj.getParticle(max).setAll(tmp);*/
			
		}
	};
};

#endif // !FITNESSFUNCTION_H

