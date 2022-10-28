#include "Bus.h"
Bus::Bus() {};
 Bus::Bus(std::string model, std::string brand, int busID, unsigned capacity) :Vehicle(model)
{
	 this->brand = brand;
	 this->busID = busID;
	 this->capacity = capacity;
	 
}
void Bus::GetBus(int ID, std::string model, std::string brand, unsigned Capacity) 
{
	Vehicle::get( model);

	busID = ID;
	this->brand = brand;
	capacity = Capacity;
	free = Capacity;

}
unsigned Bus::PassengerEntry(unsigned k)
{
	
	if (k >= capacity)
	{
		
		NumPlaceTaken = k;
		free = 0;
		return k - capacity;
	}
	else 
	{
		
		NumPlaceTaken =  k;
		free = capacity - k;
		return free;
	}
}
bool Bus::Free()
{
	if (free != 0)
		return 1;
	else
		return 0;

}

void Bus::Print()
{

	std::cout << "Bus ID:" << busID << std::endl;
	std::cout << "Bus Brand:" << brand << std::endl;
	std::cout << "Bus capacity:" << capacity << std::endl;
	Vehicle::Print();

}
void Bus::PrintFree()
{
	std::cout << "Free places -> " << free << std::endl;
}
Bus::~Bus() {};