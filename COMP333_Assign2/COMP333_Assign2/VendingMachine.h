//Darrell Crouse
//COMP333 Assignment 2
// A program to manage Vending Machines.  

#pragma once

#include <string>

using namespace std;

class VendingMachine {

	protected:
		string *productName;
		int qtyOnHand;
				
	public:
		VendingMachine();
		VendingMachine(string, /*Initial Product Name*/
					   int /*Inital Quantity On Hand*/);
		~VendingMachine();
		virtual void show(ostream & /*Output Source*/) const;
		int getQtyOnHand() const { return qtyOnHand; }
		string getProductName() const { return *productName; };
		
};