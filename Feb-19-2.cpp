#include <iostream>

using namespace std;

void printer(string name);
int cuber(int num);


int main(){
	printer("Bradley");
	cout << cuber(3);
	return 0;
}

void printer(string name){
	cout << name;
}

int cuber(int num){
	return num*num*num;
}
// functions must be above main() function, main function runs first
// can define function header above main() then use function below main()
// void function no return type
// functions with return type return a value