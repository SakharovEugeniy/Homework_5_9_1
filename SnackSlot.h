#pragma once
#include "Snack.h"
#include <iostream>


class SnackSlot {

	int maxSize;
	int countSlot;
	Snack* slot;
	

public:
	void addSnack(Snack* snack);
	void addSnack(Snack* snack, int quantity);
	Snack deleteSnack();	
	Snack deleteSnack(Snack snack, int quantity);
	SnackSlot();
	SnackSlot(int maxSize);
	SnackSlot(const SnackSlot& other);
	int getMaxSize() const;
	void setMaxSize(int maxSize);
	int getCountSlot() const;
	void setCountSlot(int countSlot);
	Snack* getSlot() const;
	void setSlot(Snack* slot);
	void testPrint();
	int getEmpty();
};
