#include"Circle.h"

Circle::Circle(const std::list<Point>& lp, const double& radius) : Shape(lp)
{
	(lp.size() == 1) ? (radius < 0.0) ? throw WrongArg("invalid radius for Circle!") : coords = lp : throw WrongArg("invalid points list length for Circle!");
	this->radius = radius;
	set_param();
}

void Circle::set_param()
{
	square = pi*radius*radius;
}

double Circle::get_radius() { return radius; }
double Circle::get_square() { return square; }

void Circle::scale(const double& multiple) { radius *= multiple; set_param(); }

Circle::~Circle()
{
}