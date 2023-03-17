#include "VendingMachine.h"


VendingMachine::VendingMachine(int slotCount)
	{
		this->slotCount = slotCount;
		snackSlots = new SnackSlot[slotCount];
	}

VendingMachine::~VendingMachine()
{
	delete[] snackSlots;
}



SnackSlot* VendingMachine::ejectSlot(int numberOfSnackSlot)
{
	return   &snackSlots[numberOfSnackSlot];
}

void VendingMachine::addSlot(int numberOfSnackSlot, SnackSlot* snackSlot)
{
	snackSlots[numberOfSnackSlot] = *snackSlot;
}

int VendingMachine::getEmptySlotsCount()
{
	int emptySlotsCount = 0;
	for (int i = 0; i < slotCount; i++)
	{
		SnackSlot* tmpSnackSlot = &snackSlots[i];
		int tmpCount = (tmpSnackSlot->getMaxSize());
		Snack* tmpSlot = tmpSnackSlot->getSlot();

		for (int j = 0; j < tmpCount; j++)
		{
			if (tmpSlot[j].getName() == "Empty")
			{
				emptySlotsCount++;
			}
		}
	}
	return emptySlotsCount;
}
