#include "Vehicle.h"
Vehicle::Vehicle() {};

Vehicle::Vehicle(std::string model)
{
	this->model = model;
	
}

std::string Vehicle::getModel()
{
	return model;

}
bool Vehicle::equals(std::string model2)
{
	if (model == model2)
		return 1;
	else
		return 0;
}
void Vehicle::Print()
{
	std::cout << "Model:" << model << std::endl;
}
void Vehicle::get(std::string model)
{
	this->model = model;
}
Vehicle::~Vehicle() {};