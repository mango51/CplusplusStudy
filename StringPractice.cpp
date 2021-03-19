#include <iostream>
#include <string>
using namespace std;

int main() {
	string s1("Welcome");
	s1.append(" to");
	s1 += " C++";
	cout << s1 << endl;

	string s2("Welcome");
	s2.assign("Dallas, Texas", 0, 5);
	cout << s2 << endl;

	s1.erase(1, 2);
	cout << s1.substr(1, 4) << endl;
	cout << s1.length() << endl;

	string s3("Welcome to HTML");
	s3.replace(11, 4, "JAVA");
	cout << (s1 == s3) << endl;
	return 0;
}