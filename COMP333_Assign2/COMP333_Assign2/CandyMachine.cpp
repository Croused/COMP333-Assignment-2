//Darrell Crouse
//COMP333 Assignment 2

#include <iostream>
#include "CandyMachine.h"




CandyMachine::CandyMachine() {

	cout << "What is the price of " << *productName << ": ";
	cin >> price;
	while (price <= 0 || price > 100 || cin.fail()) {
		cin.clear();
		cin.ignore(80, '\n');
		cout << "The price must be greater than 0, and  less than 100. \n"
			<< "Please enter the price of " << *productName << ": ";
		cin >> price;
	}
	cin.ignore(80, '\n');
}

CandyMachine::CandyMachine(int newQtyOnHand, string newProductName, double newPrice)
	: VendingMachine::VendingMachine(newProductName, newQtyOnHand) {

	price = newPrice;
	while (price <= 0 || price > 100 || cin.fail()) {
		cout << "The price must be greater than 0, and  less than 100. \n"
			<< "Please enter the price of " << *productName << ": ";
		cin >> price;
		cin.ignore(80, '\n');
	}

}

void CandyMachine::show(ostream & output) const {
	VendingMachine::show(output);

	output << " Price: " << price;
}

void CandyMachine::buyCandy() {
	if (qtyOnHand > 0) {
		qtyOnHand--;
		cout << *productName << " has been purchased.\n";
	}
	else {
		cout << "There is no " << *productName << " available for purchase.\n";
	}
}