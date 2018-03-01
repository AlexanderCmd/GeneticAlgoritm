#ifndef REPRODUCTION_H
#define REPRODUCTION_H

#include "Population.h"
#include "Selector.h"

class Reproduction {
public:
	Reproduction() {};
	void crossing(Population &obj) {
		Selector s;
		Function func;
		Particle tmpP1;
		Particle tmpP2;
		std::pair<double, double> tmp;
		for (size_t i = 50; i < 100; ++i, ++i) { // создаю 50 детей
			tmp = s.choiceParents(); // выбираю двух случайных родителей
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
			tmpP1.setZ(func.function_value(obj.getParticle(i).getX(), obj.getParticle(i).getY()));
			tmpP2.setZ(func.function_value(obj.getParticle(i + 1).getX(), obj.getParticle(i + 1).getY()));
			obj.setParticl(tmpP1, i);
			obj.setParticl(tmpP2, i + 1);
		}
	};
};

#endif // !REPRODUCTION_H

