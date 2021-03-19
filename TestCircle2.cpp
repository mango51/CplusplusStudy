#include <iostream>
using namespace std;
#include "Circle.h"

void printCircle(Circle& c) {
	cout << " 반지름 " << c.getRadius() << "인 c의 면적은: " << c.getArea() << endl;
	c.setRadius(3.0);
	cout << " printCircle을 통해 변경된 반지름 " << c.getRadius() << "인 c의 면적은: " << c.getArea() << endl;

}
int main() {
	Circle myCircle(5.0);
	printCircle(myCircle);
	cout << " 반지름 " << myCircle.getRadius() << "인 myCircle의 면적은: " << myCircle.getArea() << endl;
	// 원본에 직접 접근해서 변경된 반지름 볼 수 있음
	return 0;
}