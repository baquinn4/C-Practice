#include <iostream>

using namespace std;

// classes and Objects

// creating a Person data type
class Person {
	public:
		string name;
		char gender;
		int age;

};
int main(){

	Person p1;
	p1.name = "Brad";
	p1.gender = 'M';
	p1.age = 23;

	cout << p1.name;
	return 0;
}