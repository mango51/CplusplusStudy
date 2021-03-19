#include <iostream>
using namespace std;
#include "Circle.h"

void printCircle(Circle c) {
	cout << " 반지름 " << c.getRadius() << "인 c의 면적은: " << c.getArea() << endl;
	c.setRadius(3.0);
	cout << " printCircle을 통해 변경된 반지름 " << c.getRadius() << "인 c의 면적은: " << c.getArea() << endl;

}
int main() {
	Circle myCircle(5.0);
	printCircle(myCircle);
	cout << " 반지름 " << myCircle.getRadius() << "인 myCircle의 면적은: " << myCircle.getArea() << endl;
	// printCircle에서 반지름 변경했지만 printCircle 안에 있는 c만 반지름 변경되고
	// myCircle로 다시 돌아오면 변경되어 있지 않음 (원래 그 상태 그대로임)
	return 0;
}