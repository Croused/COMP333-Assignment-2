//Darrell Crouse
//COMP333 Assignment 2
#pragma once
#include "VendingMachine.h"

class CandyMachine : public VendingMachine {

private:
	double price;

public:
	CandyMachine();
	CandyMachine(int, /*Quantity On Hand*/
		string, /*Product Name*/
		double /*Price*/);
	void show(ostream & /*output destination*/) const;
	void buyCandy();
	double getPrice() const { return price; }

};
