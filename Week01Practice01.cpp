#include <iostream>
using namespace std;

class Circle {
public:
	double radius;
	Circle() :radius(1){
	}
	Circle(double newRadius) :radius(newRadius){
	}
	double getArea() {
		return radius * radius * 3.14159;
	}
};
int main() {
	Circle circle1;
	Circle circle2(25);
	Circle circle3(125);
	Circle circle4(1);
	Circle circle5(5);

	cout << "circle1 radius: " << circle1.radius << "  area: " << circle1.getArea() << endl;
	cout << "circle2 radius: " << circle2.radius << "  area: " << circle2.getArea() << endl;
	cout << "circle3 radius: " << circle3.radius << "  area: " << circle3.getArea() << endl;
	cout << "circle4 radius: " << circle4.radius << "  area: " << circle4.getArea() << endl;
	cout << "circle5 radius: " << circle5.radius << "  area: " << circle5.getArea() << endl;
	cout << endl;
	circle2.radius = 100;
	cout << "¼öÁ¤ÇÑ circle2 radius: " << circle2.radius << "  area: " << circle2.getArea() << endl;
	return 0;
}