#ifndef SQUARE_H
#define SQUARE_H

#include "Shape.h"

class Square:public Shape{
	public:
	void set_square_side(float);
	float get_square_area() const;
};

#endif
