#include"Square.h"

Square::Square(const std::list<Point>& lp) : Shape(lp)
{
	if (lp.size() != 4) { throw WrongArg("invalid points list length for Square!"); }
	coords = lp;
	set_param();
}

void Square::scale(const double& multiple)
{
	for (auto& it : coords)
	{
		it.X *= multiple;
		it.Y *= multiple;
		it.Z *= multiple;
	}
	set_param();
}

void Square::scale(const double& multipleX, const double& multipleY, const double& multipleZ)
{
	if (multipleX) 
	{ 
		for (auto& it : coords)
		{
			it.X *= multipleX;
		}
	}
	if (multipleY) 
	{ 
		for (auto& it : coords)
		{
			it.Y *= multipleY;
		}
	}
	if (multipleZ) 
	{ 
		for (auto& it : coords)
		{
			it.Z *= multipleZ;
		}
	}
	set_param();
}

void Square::set_param()
{
	auto p1 = *coords.begin();
	auto p2 = *(++coords.begin());
	side = std::pow(std::pow((p2.X - p1.X), 2) + std::pow((p2.Y - p1.Y), 2) + std::pow((p2.Z - p1.Z), 2), 0.5);
	square = side * side;
}

double Square::get_square(){return square;}
double Square::get_side(){ return side; }

Square::~Square()
{
}