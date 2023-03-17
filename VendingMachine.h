#pragma once
#include "SnackSlot.h"

class VendingMachine
{
	int slotCount;
	SnackSlot* snackSlots;

public:
	VendingMachine(int slotCount);
	~VendingMachine();
	SnackSlot* ejectSlot(int numberOfSnackSlot);
	void addSlot(int numberOfSnackSlot, SnackSlot* snackSlot);
	int getEmptySlotsCount();
};