#pragma once
#define _USE_MATH_DEFINES
#include<iostream>
#include<list>
#include<string>
#include<cmath>
#include"Point.h"
#include"ShapeException.h"

class Shape
{
public:
    Shape(const std::list<Point>& lp);
    ~Shape();
    void shift(const double& offset);
protected:
    std::list<Point> coords;
    virtual void set_param();
};