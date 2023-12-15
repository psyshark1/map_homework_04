#include"Shape.h"

Shape::Shape(const std::list<Point>& lp)
{
}

void Shape::shift(const double& offset)
{
	for(auto& it : coords)
	{
		it.X += offset;
		it.Y += offset;
		it.Z += offset;
	}
}

void Shape::set_param()
{
}

Shape::~Shape()
{
}