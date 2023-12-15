#include"Cube.h"

Cube::Cube(const std::list<Point>& lp) : Square(lp)
{
	(lp.size() != 8) ? throw WrongArg("invalid points list length for Cube!") : coords = lp;
	set_param();
}

void Cube::set_param()
{
	auto p1 = *coords.begin();
	auto p2 = *(++coords.begin());
	side = std::pow(std::pow((p2.X - p1.X), 2) + std::pow((p2.Y - p1.Y), 2) + std::pow((p2.Z - p1.Z), 2), 0.5);
	square = (side * side)*6;
	volume = side * side * side;
}

double Cube::get_volume() { return volume; }

Cube::~Cube()
{
}