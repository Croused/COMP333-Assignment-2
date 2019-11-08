//Darrell Crouse
//COMP333 Assignment 2


#include <iostream>
#include "VendingMachine.h";
#include "SodaPop.h"

using namespace std;

int main() {

	VendingMachine obj1("prod", 1);
	SodaPop obj2(1, "pop", 2.0);
	obj1.show(cout);
	obj2.show(cout);
	obj2.buyPop();
	obj2.show(cout);
	obj2.buyPop();
	obj2.show(cout);

	cout << "\n\nEnd Of Program\n";
	system("pause");
}