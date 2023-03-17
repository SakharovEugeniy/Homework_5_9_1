#include "SnackSlot.h"



	void SnackSlot::addSnack(Snack* snack)
	{
		if (countSlot < maxSize)
		{
			slot[countSlot] = *snack;
			countSlot++;
		}
		else
		{
			std::cout << "Slot is ful";
		}
	}

	void SnackSlot::addSnack(Snack* snack, int quantity)
	{
		for (int i = 0; i < quantity; i++)
		{
			if (countSlot < maxSize)
			{
				slot[countSlot] = *snack;
				countSlot++;
			}
			else
			{
				std::cout << "Slot is full";
			}
		}
	}

	Snack SnackSlot::deleteSnack()
	{
		if (countSlot > 0)
		{
			Snack tmpSnack = slot[countSlot];
			Snack emptySnack;
			slot[countSlot] = emptySnack;
			countSlot--;
			return tmpSnack;
		}
		else
		{
			std::cout << "Slot is emty";
		}
	}

	Snack SnackSlot::deleteSnack(Snack snack, int quantity)
	{
		for (int i = 0; i < quantity; i++)
		{
			if (countSlot > 0)
			{
				Snack tmpSnack = slot[countSlot];
				Snack emptySnack;
				slot[countSlot] = emptySnack;
				countSlot--;
				return tmpSnack;
			}
			else
			{
				std::cout << "Slot is emty";
			}
		}
	}

	SnackSlot::SnackSlot()
	{
		maxSize = 10;
		countSlot = 0;
		slot = new Snack[maxSize];
	}

	SnackSlot::SnackSlot(int maxSize)
	{
		this->maxSize = maxSize;
		countSlot = 0;
		slot = new Snack[maxSize];
		for (int i = 0; i < maxSize; i++)
		{
			slot[i] = Snack();
		}
	}

	SnackSlot::SnackSlot(const SnackSlot& other)
	{
		this->maxSize = other.maxSize;
		this->countSlot = other.countSlot;
		this->slot = new Snack[maxSize];
		for (int i = 0; i < other.countSlot; i++)
		{
			this->slot[i] = other.slot[i];
		}
	}


	int SnackSlot::getMaxSize() const
	{
		return maxSize;
	}
	void SnackSlot::setMaxSize(int maxSize)
	{
		this->maxSize = maxSize;
	}
	int SnackSlot::getCountSlot() const
	{
		return countSlot;
	}
	void SnackSlot::setCountSlot(int countSlot)
	{
		this->countSlot = countSlot;
	}
	Snack* SnackSlot::getSlot() const
	{
		return slot;
	}
	void SnackSlot::setSlot(Snack* slot)
	{
		this->slot = slot;
	}

	void SnackSlot::testPrint()
	{

		for (int i = 0; i < this->getMaxSize(); i++)
		{
			std::cout << "Номер ячейки " << i + 1 << "\tназвание " << this->slot[i].getName() << "\tцена " << this->slot[i].getPrice() << std::endl;
		}
		std::cout << std::endl;
	}

	int SnackSlot::getEmpty()
	{
		int emptyCount = 0;
		for (int i = 0; i < this->getMaxSize(); i++)
		{
			if (this->slot[i].getName() == "Empty")
			{
				emptyCount++;
			}
		}
		return emptyCount;
	}
