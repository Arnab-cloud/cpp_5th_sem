#include <iostream>
#include "Shape.h"

int main(){

	float sq_len;
	float rect_dims[2];
	Square sq;
	Rect rt;

	std::cout << "Enter lentgh for square: ";
	std::cin >> sq_len;

	std::cout << "\nEnter dimensions of rectangle: ";
	std::cin >> rect_dims[0] >> rect_dims[1];

	sq.set_square_side(sq_len);
	rt.set_dimensions(rect_dims[0], rect_dims[1]);

	std::cout << "Area of the sqaure is: " << sq.get_square_area() << std::endl;
	std::cout << "Area of the rect is: " << rt.get_rect_area() << std::endl;

	return 0;
}

