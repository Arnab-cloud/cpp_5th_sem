#include "Shape.h"

void Rect::set_dimensions(float l, float w){
	setShape(l);
	m_width = w;
}

float Rect::get_rect_area() const{ return getShape() * m_width; }
