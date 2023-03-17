#pragma once
#include <string>

class Snack
{
	std::string name;
	double price;

public:
	Snack();
	Snack(std::string name);
	Snack(std::string name, double price);
	std::string getName() const;
	void setName(std::string name);
	double getPrice() const;
	void setPrice(double price);
};
