#pragma once
#include"Shape.h"

const constexpr double pi = 3.1415;

class Circle : public Shape
{
public:
	Circle(const std::list<Point>& lp, const double& radius);
	virtual void scale(const double& multiple);
	double get_radius();
	double get_square();
	~Circle();

protected:
	void set_param() override;
	double square;
	double radius;
};