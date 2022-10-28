#pragma once
#include <string>
#include <iostream>

class Vehicle
{
	std::string model;

public:
	Vehicle();
	Vehicle(std::string);
	std::string getModel();
	void get(std::string);
	bool equals(std::string);
	virtual void Print() = 0;

	~Vehicle();
};

