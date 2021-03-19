#ifndef CIRCLE_H
#define CIRLCE_H

class Circle {
public:
	Circle();
	Circle(double);
	double getArea();
	double getRadius() {
		return radius;
	}
	void setRadius(double);

private:
	double radius;
};

inline void Circle::setRadius(double newRadius) {
	radius = (newRadius >= 0) ? newRadius : 0;
}

#endif