#pragma once
#include"Shape.h"

class Line : public Shape
{
public:
	Line(const std::list<Point>& lp);
	~Line();
	double get_length();
protected:
	double length;
	void set_param() override;
};
