#pragma once
#include "Vehicle.h"
#include <vector>
class Bus:public Vehicle
{

	int busID;
	std::string brand;
	unsigned  capacity;//of bus
	unsigned NumPlaceTaken;//Number of passengers  currently driving 
	unsigned free;
public:

	
	Bus();
	Bus(std::string model,std::string brand,int busID,unsigned capacity);
	void GetBus(int ID, std::string model, std::string brand, unsigned Capacity);
	unsigned PassengerEntry(unsigned k);
	bool Free();
	void Print();
	void PrintFree();

	~Bus();




};

