#include <iostream>
using namespace std;
#include "Circle.h"

void printCircle(Circle c) {
	cout << " ������ " << c.getRadius() << "�� c�� ������: " << c.getArea() << endl;
	c.setRadius(3.0);
	cout << " printCircle�� ���� ����� ������ " << c.getRadius() << "�� c�� ������: " << c.getArea() << endl;

}
int main() {
	Circle myCircle(5.0);
	printCircle(myCircle);
	cout << " ������ " << myCircle.getRadius() << "�� myCircle�� ������: " << myCircle.getArea() << endl;
	// printCircle���� ������ ���������� printCircle �ȿ� �ִ� c�� ������ ����ǰ�
	// myCircle�� �ٽ� ���ƿ��� ����Ǿ� ���� ���� (���� �� ���� �״����)
	return 0;
}