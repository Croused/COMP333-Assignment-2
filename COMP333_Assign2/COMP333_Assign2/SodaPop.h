//Darrell Crouse
//COMP333 Assignment 2

#pragma once

#include "VendingMachine.h"


class SodaPop : public VendingMachine {

	private:
		double price;

	public:
		SodaPop();
		SodaPop(int, /*Quantity On Hand*/
				string, /*Product Name*/
				double /*Price*/);
		void show(ostream & /*output destination*/) const ;
		void buyPop();
		double getPrice() const { return price; }

};