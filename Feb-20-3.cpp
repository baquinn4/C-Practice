#include <iostream>

using namespace std;

// constructors

class Person {
	public:
		string name;
		char gender;
		int age;
		Person(string aName,char aGender,int aAge){
			name = aName;
			gender = aGender;
			age = aAge;
		}
	void printer(){
		cout << name << endl;
		cout << gender << endl;
		cout << age << endl;
	}
};
int main(){

	Person p1("Brad",'M',23);
	p1.printer();
	cout << &p1;
}