#include "Shape.h"

void Square::set_square_side(float l){ setShape(l); }

float Square::get_square_area() const {
	float sq_side = getShape();
	return sq_side * sq_side;
}
