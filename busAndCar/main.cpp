#include "vehicle.h"

int main(){
	Car new_car;
	new_car.input_reg();
	new_car.display_car_reg();

	Bus new_bus;
	new_bus.input_reg();
	new_bus.display_bus_reg();

	return 0;
}
