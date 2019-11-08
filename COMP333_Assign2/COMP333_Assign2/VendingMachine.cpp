//Darrell Crouse
//COMP333 Assignment 2

#include "VendingMachine.h";
#include <iostream>
#include <cassert>

using namespace std;



VendingMachine::VendingMachine() {
	productName = new string();
	assert(productName);
	
	cout << "Enter a Product Name: ";
	getline(cin, *productName);
	while (productName->length() == 0) {
		cout << "You must enter a product name.  Product Name: ";
		getline(cin, *productName);
	}

	cout << "Enter how many " << *productName << " are on hand: ";
	cin >> qtyOnHand;
	while (qtyOnHand < 0 || qtyOnHand > 100 || cin.fail()) {
		cin.ignore(80, '\n');
		cin.clear();
		cout << "The quantity must be 0 or larger, and less than 100.  Enter how many " << *productName << " are on hand: ";
		cin >> qtyOnHand;
	}
	cin.ignore(80, '\n');


}


VendingMachine::VendingMachine(string newProductName, int newQtyOnHand) {
	productName = new string();
	assert(productName);

	*productName = newProductName;
	while (productName->length() == 0) {
		cout << "You must enter a product name.  Product Name: ";
		getline(cin, *productName);
	}

	qtyOnHand = newQtyOnHand;
	while (qtyOnHand < 0 || qtyOnHand > 100 || cin.fail()) {
		cin.ignore(80, '\n');
		cin.clear();
		cout << "The quantity must be 0 or larger, and less than 100.  Enter how many " << *productName << " are on hand: ";
		cin >> qtyOnHand;
	}
	cin.ignore(80, '\n');
}


VendingMachine::~VendingMachine() {
	
	delete productName;

}


void VendingMachine::show(ostream & output) const {
	output << "Product Name: " << *productName << "  Quantity On Hand: " << qtyOnHand;
}