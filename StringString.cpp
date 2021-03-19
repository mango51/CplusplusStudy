#include <iostream>
#include <string>
using namespace std;

int main() {
	string s1;
	s1 = "Welcome";
	s1.append(" to C++");
	cout << s1 << endl;

	string s2;
	//변수 선언
	s2 = "Welcome";
	s2.append(" to C and C++", 3, 5);
	cout << s2 << endl;

	string s3 = "Welcome";
	//string s3; string s3 = "Welcome";과 같은 뜻
	s3.append(" to C and C++", 5);
	cout << s3 << endl;

	string s4("Welcome");
	//string s4="Welcome"과 같은 뜻
	//string s4; s4="Welcome";과 같은 뜻
	s4.append(4, 'G');
	cout << s4 << endl;

	string s5("Welcome");
	s5.assign("Dallas");
	cout << s5 << endl;

	string s6("Welcome");
	s6.assign("Dallas", 2, 5);
	cout << s6 << endl;

	string s7;
	s7 = "Welcome";
	s7.assign("Dallas, Texas", 5);
	cout << s7 << endl;

	string s8 = "Welcome";
	s8.assign(4, 'G');
	cout << s8 << endl;

	string s9("Welcome");
	cout << s9.at(3) << endl;
	s9.erase(2, 3);
	cout << s9 << endl;
	s9.clear();
	cout << s9.empty() << endl;

	string s10("Welcome");
	cout << s10.length() << endl;
	cout << s10.size() << endl;
	cout << s10.capacity() << endl;

	s10.erase(1, 2);
	cout << s10.length() << endl;
	cout << s10.size() << endl;
	cout << s10.capacity() << endl;

	string s11("Welcome");
	string s12("Welcomg");
	cout << s11.compare(s12) << endl;
	cout << s12.compare(s11) << endl;
	cout << s11.compare("Welcome") << endl;

	cout << s11.substr(0, 1) << endl;
	cout << s11.substr(3) << endl;
	cout << s11.substr(3, 3) << endl;

	string s13("Welcome to HTML");
	cout << s13.find('o') << endl;
	cout << s13.find('o', 5) << endl;
	cout << s13.find("co") << endl;
	if (s13.find("co", 5) == string::npos) {
		cout << "no more" << endl;
	}

	s13.insert(11, "C++ and");
	cout << s13 << endl;

	string s14("AA");
	s14.insert(1, 4, 'B');

	s13.replace(11, 11, "C++");
	// 앞 11은 인덱스 11, 뒷 11은 11개의 문자열
	// 인덱스 11부터 11개의 문자열 교체하기
	cout << s13 << endl;

	string s15 = "ABC";
	string s16 = s15;
	cout << s16[0] << endl;

	string s17 = s15 + "DEFGH";
	s15 += "ABC";
	cout << (s15 <= s17) << endl;
}