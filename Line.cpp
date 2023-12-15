#include"Line.h"

Line::Line(const std::list<Point>& lp) : Shape(lp)
{
	(lp.size() == 2) ? (*lp.cbegin() == *lp.crbegin()) ? throw WrongArg("incorrect coords points for Line!") : coords = lp : throw WrongArg("invalid points list length for Line!");
	set_param();
}

void Line::set_param()
{
	auto p1 = coords.begin();
	auto p2 = ++coords.begin();
	length = std::pow(std::pow((p2->X - p1->X), 2) + std::pow((p2->Y - p1->Y), 2) + std::pow((p2->Z - p1->Z), 2), 0.5);
}

double Line::get_length() { return length; }

Line::~Line()
{
}