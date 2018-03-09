#ifndef REPRODUCTION_H
#define REPRODUCTION_H

//#include "Population.h"
#include "Strategy.h"

class Reproduction : Strategy {
public:
	Reproduction() {};

	void metod (Population &obj) {
		Particle tmpP1;
		Particle tmpP2;
		std::pair<int, int> tmp;
		for (size_t i = obj.getSize() / 2; i < obj.getSize(); ++i, ++i) { 
			tmp = choiceParents(obj.getSize() / 2);  
			tmpP1.setX((obj.getParticle(tmp.first).getX() + obj.getParticle(tmp.second).getX()) / 2);
			tmpP2.setY((obj.getParticle(tmp.first).getY() + obj.getParticle(tmp.second).getY()) / 2);
			if (rand() % 1 == 0) {
				tmpP1.setY(obj.getParticle(tmp.first).getY());
				tmpP2.setX(obj.getParticle(tmp.first).getX());
			}
			else {
				tmpP1.setY(obj.getParticle(tmp.second).getY());
				tmpP2.setX(obj.getParticle(tmp.second).getX());
			}
			obj.setParticl(tmpP1.getX(), tmpP1.getY(), i);
			obj.setParticl(tmpP2.getX(), tmpP2.getY(), i + 1);
		}
	};

	std::pair<double, double> choiceParents(const int size) {
		std::default_random_engine grain;
		std::uniform_int_distribution<int> rand { 0, size };
		return std::pair<int, int>(rand(grain), rand(grain));
	};
};

#endif // !REPRODUCTION_H

