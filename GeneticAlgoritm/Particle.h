#ifndef PARTICLE_H
#define PARTICLE_H

#include <iostream>

class Particle {
private:
	double x;
	double y;
public:
	Particle() {};

	Particle(const int x, const int y) {
		this->x = x;
		this->y = y;
	};

	double getX() const { return x; };
	double getY() const { return y; };

	void setX(const double x) { this->x = x; };
	void setY(const double y) { this->y = y; };

	void setAll(const double x, const double y) {
		this->x = x;
		this->y = y;
	};
};

#endif // !PARTICLE_H

