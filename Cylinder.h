#pragma once
#include"Circle.h"

class Cylinder : public Circle
{
public:
	Cylinder(const std::list<Point>& lp, const double& radius);
	~Cylinder();
	double get_volume();
protected:
	double volume;
	double height;
	void set_param() override;
};

