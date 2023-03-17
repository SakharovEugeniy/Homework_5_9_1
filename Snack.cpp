#include "Snack.h"


Snack::Snack()
	{
		name = "Empty";
		price = 0;
	}
Snack::Snack(std::string name)
	{
		this->name = name;
		this->price = 100;
	}

Snack::Snack(std::string name, double price)
	{
		this->name = name;
		this->price = price;
	}

	std::string Snack::getName() const
	{
		return name;
	}
	void Snack::setName(std::string name)
	{
		this->name = name;
	}

	double Snack::getPrice() const
	{
		return price;
	}
	void Snack::setPrice(double price)
	{
		this->price = price;
	}
