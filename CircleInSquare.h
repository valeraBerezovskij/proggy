#pragma once
#include "Circle.h"
#include "Square.h"

class CircleInSquare
	: public Circle, public Square 
{
public:
	CircleInSquare(double r, double s) : Circle(r), Square(s) {}
	CircleInSquare() = default;

	double areaCircle()      const { return Circle::area(); }
	double areaSquare()      const { return Square::area(); }

	double perimeterCircle() const { return Circle::perimeter(); }
	double perimeterSquare() const { return Square::perimeter(); }
};

