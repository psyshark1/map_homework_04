#include"ShapeException.h"

const char* WrongArg::what() const
{
	return message;
}

WrongArg::WrongArg(const char* msg) : std::invalid_argument(msg)
{
	this->message = msg;
}

WrongArg::~WrongArg()
{
}