#ifndef SHAPE_H
#define SHAPE_H


// Base class "Shape"
class Shape{
	private:
	float m_side;
	
	public:
	Shape(): m_side(1.0){};
	void setShape(float);
	float getShape() const;

};


// Derived class "Square"
class Square:public Shape{
	public:
	void set_square_side(float);
	float get_square_area() const;
};

// Derived class "Rect"
class Rect:public Shape{
	private:
	float m_width;

	public:
	void set_dimensions(float, float);
	float get_rect_area() const;
};

#endif
