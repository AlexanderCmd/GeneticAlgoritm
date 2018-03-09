#ifndef POPULATION_H
#define POPULATION_H

#include <iostream>
#include <vector>
#include <random>
#include "Particle.h"

class Population {
protected:
	std::vector<Particle> population;
public:
	Population() {};
	Population(const size_t size) {
		std::default_random_engine grain;
		std::uniform_int_distribution<int> rand{ -500, 500 };
		for (size_t i = 0; i < size / 2; ++i) {    // начальная популяция заданная рандомом
			population.push_back (Particle(rand(grain), rand(grain)));
		}

		for (size_t i = 0; i < size / 2; ++i) // популяция полученная скрещиванием
			population.push_back (Particle());
	};

	Particle getParticle(const size_t index) {
		return population[index];
	};

	void setParticl(const double x, const double y, const size_t index) {
		population[index].setAll(x, y);
	};
	
	const size_t getSize() {
		return population.size();
	};
};

#endif // !POPULATION_H

