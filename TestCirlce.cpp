#include <iostream>
using namespace std;
#include "Circle.h"

int main() {
	Circle circle1;
	Circle circle2(25);
	Circle circle3(125);

	cout << "circle1 radius : "<<circle1.getRadius() << " area: " << circle1.getArea() << endl;
	cout << "circle2 radius : "<<circle2.getRadius() << " area: " << circle2.getArea() << endl;
	cout << "circle3 radius : " <<circle3.getRadius() << " area: " << circle3.getArea() << endl;

	circle2.setRadius(50);
	circle3.setRadius(-30);
	cout << "circle2 revised radius : "<<circle2.getRadius()<< " area: " << circle2.getArea() <<endl;
	cout << "circle3 revised radius : " << circle3.getRadius()<< " area: " << circle3.getArea() << endl;;
	 
	return 0;
}