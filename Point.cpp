#include"Point.h"
Point::Point(double& _x, double& _y, double _z) : X(_x), Y(_y), Z(_z){}
Point::Point(double&& _x, double&& _y, double _z) : X(_x), Y(_y), Z(_z){}
Point::~Point(){}