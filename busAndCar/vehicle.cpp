#include <iostream>
#include "vehicle.h"

void Vehicle::input_reg(){	
	std::cout << "Enter the registration no. ";
	std::cin >> m_reg_no;
}

void Vehicle::display_reg() const{ std::cout<< "Reg no: "<<m_reg_no << '\n';}

void Car::display_car_reg() const{

	std::cout << "Car's ";
	display_reg();
}

void Bus::display_bus_reg() const{

	std::cout << "Bus's ";
	display_reg();
}
