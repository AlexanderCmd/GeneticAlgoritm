#ifndef MUTATOR_H
#define MUTATOR_H

//#include "Population.h"
#include <random>
#include "Strategy.h"

class Mutator : Strategy {
public:
	Mutator() {};

	void metod(Population &obj) {
		std::default_random_engine grain;
		std::uniform_int_distribution<int> rand{ 0, 9 };
		double probability = 0;
		Particle tmp;
		for (size_t i = 0; i < 100; ++i) {
			tmp = obj.getParticle(i);
			probability = rand(grain);
			if (probability < 4) // с вероятностью 40 % мутирует x
				if (probability < 2)
					tmp.setX(obj.getParticle(i).getX() + 1);
				else
					tmp.setX(obj.getParticle(i).getX() - 1);
			probability = rand(grain);
			if (probability < 4) // с вероятностью 40 % мутирует y
				if (probability < 2)
					tmp.setY(obj.getParticle(i).getY() + 1);
				else
					tmp.setY(obj.getParticle(i).getY() - 1);
			obj.setParticl(tmp.getX(), tmp.getY(), i);
		}
	};
};

#endif // MUTATOR_H

