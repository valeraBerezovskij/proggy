#pragma once
class Circle
{
protected:
	double radius;
public:
	Circle(double r) : radius(r) {}
	Circle() = default;

	double area()      const { return 3.14 * (radius * radius); }
	double perimeter() const { return 2 * 3.14 * radius; }
};

