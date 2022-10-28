#include <iostream>
#include <vector>
#include <limits>
#include "Bus.h"
#include "Vehicle.h"
#include <memory>

void ignore_line() {
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
int main()
{
	int n;
	
	srand((int)time(0));
	unsigned NumberPassengers = rand() % 100 + 1;

	
	bool PassengerBoard=0;
	int busID;
	std::string brand;
	unsigned  capacity;//of bus
	unsigned NumPlaceTaken;//Number of passengers  currently driving 
	std::string model;

	
	do
	{
		std::cout << "insert number of buses" << std::endl;
		std::cin >> n;

		std::shared_ptr<Bus[]>A(new Bus[n]);

		for (int i = 0; i < n; i++)
		{
			std::cout << "Data for Bus " << i + 1 << std::endl;
			std::cout << "Insert model" << std::endl;
			std::cin >> model;
			std::cout << "Insert brand" << std::endl;
			std::cin >> brand;
			std::cout << "Insert Bus ID" << std::endl;
			std::cin >> busID;
			std::cout << "Insert capacity" << std::endl;
			std::cin >> capacity;
			ignore_line();
			std::cout << "------------------------" << std::endl;
			A[i].GetBus(busID, model, brand, capacity);


		}

		for (int i = 0; i < n; i++)
		{
			std::cout << "Bus" << i + 1 << std::endl;
			A[i].Print();
			std::cout << "-------------" << std::endl;
		}

		std::cout << "Number of Passengers->" << NumberPassengers << std::endl;
		std::cout << "------------------" << std::endl;
		for (int i = 0; i < n; i++)
		{
			std::cout << "Print free places for Bus " << i + 1 << std::endl;
			auto a = A[i].PassengerEntry(NumberPassengers);
			A[i].PrintFree();
			NumberPassengers = a;

			if (A[i].Free())
			{
				std::cout << "All passengers are on board, there is no need for new buses" << std::endl;
				
				PassengerBoard = 0;
				break;
			}
			else
			{
				PassengerBoard = 1;
			}
			std::cout << "----------------" << std::endl;
		}

		
	} while (PassengerBoard);

	return 0;
}