#include "thinker.h"
#include <iostream>
#include <cstring>


void thinking_cap::slot(const char new_green[],const char new_red[]){

	if( strlen(new_green) > 50){
		std::cout << "Value of green should not be greater than 50" << '\n';
		return;
	}
	if( strlen(new_red) > 50){
		std::cout << "Value of red should not be greater than 50" << '\n';
		return;
	}
	strcpy(green_string, new_green);
	strcpy(red_string, new_red);
}

void thinking_cap::push_green() const { std::cout<< green_string << '\n';}
void thinking_cap::push_red() const { std::cout<< red_string << '\n';}
