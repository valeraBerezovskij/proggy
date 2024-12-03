#pragma once
class Square
{
protected:
	double side;
public:
	Square(double s) : side(s) {}
	Square() = default;

	double area()      const { return side * side; }
	double perimeter() const { return side * 4; }
};

