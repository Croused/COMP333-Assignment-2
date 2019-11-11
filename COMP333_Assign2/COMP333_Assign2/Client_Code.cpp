//Darrell Crouse
//COMP333 Assignment 2


#include <iostream>
#include <iomanip>
#include <cassert>
#include "VendingMachine.h"
#include "SodaPop.h"
#include "CandyMachine.h"

using namespace std;

void showInfo(const VendingMachine* /*Vending Object*/);



int main()
{
	cout << fixed << setprecision(2);

	cout << "1. Demonstrating creating a SodaPop on the stack, calling upon the non default constructor\n";
	SodaPop drinkMachine1(1, "Diet Coke", 2.49);
	cout << "Drink machine#1 is selling: "
		<< drinkMachine1.getProductName();
	cout << "\n selling price is $: "
		<< drinkMachine1.getPrice();
	cout << "\n quantity on hand = " << drinkMachine1.getQtyOnHand() << "\n\n";
	drinkMachine1.buyPop();
	cout << "\n quantity on hand = " << drinkMachine1.getQtyOnHand() << "\n\n";
	cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n";

	cout << "2. Demonstrating creating a SodaPop object on the stack, calling non default constructor with no product name \n";
	SodaPop drinkMachine2(100, "", 1.00);
	cout << "No product name was assigned for Drink Machine#2, so it is selling: "
		<< drinkMachine2.getProductName();
	cout << "\n selling price is $: "
		<< drinkMachine2.getPrice();
	cout << "\n quantity on hand = " << drinkMachine2.getQtyOnHand() << "\n\n";
	drinkMachine2.buyPop();
	cout << "\n quantity on hand = " << drinkMachine2.getQtyOnHand() << "\n\n";
	cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n";

	cout << "3. Demonstrating creating a SodaPop object on the heap, calling non default with no price\n";
	SodaPop * drinkMachine3 = new SodaPop(53, "Ginger Ale", 0.0);
	assert(drinkMachine3);
	cout << "Drink machine#3 is selling: "
		<< drinkMachine3->getProductName();
	cout << "\n since no price was assigned, it's selling price is $: "
		<< drinkMachine3->getPrice();
	cout << "\n quantity on hand = " << drinkMachine3->getQtyOnHand() << "\n\n";
	drinkMachine3->buyPop();
	cout << "\n quantity on hand = " << drinkMachine3->getQtyOnHand() << "\n\n";
	cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n";

	cout << "4. Demonstrating creating a SodaPop object on the heap, calling default constructor\n";
	SodaPop *drinkMachine4 = new SodaPop;
	assert(drinkMachine4);
	cout << "Drink machine#4 is selling: "
		<< drinkMachine4->getProductName();
	cout << "\n selling price is $: "
		<< drinkMachine4->getPrice();
	cout << "\n quantity on hand = " << drinkMachine4->getQtyOnHand() << "\n\n";
	drinkMachine4->buyPop();
	cout << "\n quantity on hand = " << drinkMachine4->getQtyOnHand() << "\n\n";
	cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n";

	cout << "5. Demonstrating creating a CandyMachine object on the stack, calling non default constructor\n";
	CandyMachine candyDispenser1(40, "Almond Joy", 2.59);
	cout << "Candy machine#1 is selling: "
		<< candyDispenser1.getProductName();
	cout << "\n selling price is $: "
		<< candyDispenser1.getPrice();
	cout << "\n quantity on hand = " << candyDispenser1.getQtyOnHand() << "\n\n";
	candyDispenser1.buyCandy();
	cout << "\n quantity on hand = " << candyDispenser1.getQtyOnHand() << "\n\n";
	cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n";

	cout << "6. Demonstrating creating a CandyMachine object on the heap, calling non default constructor\n";
	CandyMachine * candyDispenser2 = new CandyMachine(30, "Hersheys", 3.80);
	assert(candyDispenser2);
	cout << "Candy machine#2 is selling: "
		<< candyDispenser2->getProductName();
	cout << "\n selling price is $: "
		<< candyDispenser2->getPrice();
	cout << "\n quantity on hand = " << candyDispenser2->getQtyOnHand() << "\n\n";
	candyDispenser2->buyCandy();
	cout << "\n quantity on hand = " << candyDispenser2->getQtyOnHand() << "\n\n";
	cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n";

	cout << "7. Demonstrating creating a CandyMachine object on the heap, calling default constructor\n";
	CandyMachine * candyDispenser3 = new CandyMachine;
	assert(candyDispenser3);
	cout << "Candy machine#2 is selling: "
		<< candyDispenser3->getProductName();
	cout << "\n selling price is $: "
		<< candyDispenser3->getPrice();
	cout << "\n quantity on hand = " << candyDispenser3->getQtyOnHand() << "\n\n";
	candyDispenser3->buyCandy();
	cout << "\n quantity on hand = " << candyDispenser3->getQtyOnHand() << "\n\n";
	cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n";
	cout << endl << endl;

	//call polymorphic function showing costs for each candyDispenser and drinkMachine objects above
	cout << "8. Demonstrating calling polymorphic function\n";

	showInfo(&drinkMachine1);
	showInfo(&drinkMachine2);
	showInfo(drinkMachine3);
	showInfo(drinkMachine4);
	showInfo(&candyDispenser1);
	showInfo(candyDispenser2);
	showInfo(candyDispenser3);

	delete drinkMachine3;
	delete drinkMachine4;
	delete candyDispenser2;
	delete candyDispenser3;


	system("pause");
}





//

void showInfo(const VendingMachine *VendObj) {
	VendObj->show(cout);
	cout << '\n';

}