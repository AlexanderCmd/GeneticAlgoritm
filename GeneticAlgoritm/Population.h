#ifndef POPULATION_H
#define POPULATION_H

#include <iostream>
#include <vector>
#include <time.h>
#include "Function.h"
#include "Particle.h"

class Population {
private:
	std::vector<Particle> population;
public:
	Population() {
		srand(time(NULL));
		Function func;
		for (size_t i = 0; i < 50; ++i) {    // начальная популяция заданная рандомом
			population.push_back (Particle(-500 + rand() % 1000, -500 + rand() % 1000));
			population[i].setZ(func.function_value(population[i].getX(), population[i].getY()));
		}

		for (size_t i = 0; i < 50; ++i) // популяция полученная скрещиванием
			population.push_back (Particle());
	};

	Particle getParticle(const size_t index) {
		return population[index];
	}

	void setParticl(const Particle &obj, const size_t index) {
		population[index].setAll(obj);
	}

	Particle print() {
		return population[0];
	};
};

#endif // !POPULATION_H

