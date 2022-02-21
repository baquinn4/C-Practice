#include <iostream>

using namespace std;

// inheritance


class Chef {

	public:

		void makeSalad(){
			cout << "Making salad";
		}


};

class AmericanChef : public Chef {

};


int main(){

	AmericanChef AChef;
	AChef.makeSalad();

}