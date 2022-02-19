#include <iostream>

using namespace std;

int main(){

	string s = "Hello world";
	s[0] = 'V';
	cout << s.substr(0,5);

}

// string.find(substr,index to start at) : returns index where substr starts
// string.substr(start index, end index) : returns sub str of orig string
