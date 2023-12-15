#pragma once
#include "Square.h"

class Cube : public Square
{
public:
	Cube(const std::list<Point>& lp);
	~Cube();
	double get_volume();
protected:
	double volume;
	void set_param() override;
};

