#pragma once
#include"Shape.h"

class Square : public Shape
{
public:
	Square(const std::list<Point>& lp);
	~Square();
	virtual void scale(const double& multiple);
	virtual void scale(const double& multipleX, const double& multipleY, const double& multipleZ);
	double get_square();
	double get_side();
protected:
	void set_param() override;
	double square;
	double side;
};