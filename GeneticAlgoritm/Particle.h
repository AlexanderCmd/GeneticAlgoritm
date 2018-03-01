#ifndef PARTICLE_H
#define PARTICLE_H

class Particle {
private:
	double x, y, z;
public:
	Particle() {};
	Particle(const int x, const int y) {
		this->x = x;
		this->y = y;
	};

	double getX() const { return x; };
	double getY() const { return y; };
	double getZ() const { return z; };

	void setX(const double x) { this->x = x; };
	void setY(const double y) { this->y = y; };
	void setZ(const double z) { this->z = z; };
	void setAll(const Particle &obj) {
		this->x = obj.x;
		this->y = obj.y;
		this->z = obj.z;
	};
};

#endif // !PARTICLE_H

