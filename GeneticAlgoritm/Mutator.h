#ifndef MUTATOR_H
#define MUTATOR_H

#include "Population.h"

class Mutator {
public:
	Mutator() {};
	void Mutation(Population &obj) {
		double probability = 0;
		Function func;
		Particle tmp;
		for (size_t i = 0; i < 100; ++i) {
			tmp = obj.getParticle(i);
			probability = rand() % 9;
			if (probability < 4) // с вероятностью 40 % мутирует x
				if (probability < 2)
					tmp.setX(obj.getParticle(i).getX() + 1);
				else
					tmp.setX(obj.getParticle(i).getX() - 1);
			probability = rand() % 9;
			if (probability < 4) // с вероятностью 40 % мутирует y
				if (probability < 2)
					tmp.setY(obj.getParticle(i).getY() + 1);
				else
					tmp.setY(obj.getParticle(i).getY() - 1);
			tmp.setZ(func.function_value(obj.getParticle(i).getX(), obj.getParticle(i).getY())); // пересчёт z
			obj.setParticl(tmp, i);
		}
	};
};

#endif // MUTATOR_H

