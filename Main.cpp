#include "VendingMachine.h"


int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Rus");
	Snack* bounty = new Snack("Bounty");
	Snack* snickers = new Snack("Snickers");
	SnackSlot* slot = new SnackSlot(5);

	slot->addSnack(bounty); 
	slot->addSnack(snickers);

	VendingMachine* machine = new VendingMachine(2);
	machine->addSlot(0, slot);
	machine->ejectSlot(0)->testPrint();
	std::cout << machine->getEmptySlotsCount(); 
	delete machine;
	delete slot;
	delete snickers;
	delete bounty;
}

