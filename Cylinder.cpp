#include"Cylinder.h"

Cylinder::Cylinder(const std::list<Point>& lp, const double& radius) : Circle(lp,radius)
{
	(lp.size() == 2) ? 
		(*lp.cbegin() == *lp.crbegin()) ? 
			throw WrongArg("incorrect coords points for Cylinder!") :
			(radius < 0.0) ? throw WrongArg("invalid radius for Cylinder!") : coords = lp : 
	throw WrongArg("invalid points list length for Cylinder!");
	this->radius = radius;
	set_param();
}

void Cylinder::set_param()
{
	auto p1 = *coords.begin();
	auto p2 = *(++coords.begin());
	height = std::pow(std::pow((p2.X - p1.X), 2) + std::pow((p2.Y - p1.Y), 2) + std::pow((p2.Z - p1.Z), 2), 0.5);
	square = 2 * pi * radius * (radius + height);
	volume = pi * radius * radius * height;
}

double Cylinder::get_volume() { return volume; }

Cylinder::~Cylinder()
{
}