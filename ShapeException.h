#pragma once
#include<stdexcept>

class WrongArg : public std::invalid_argument
{
public:
	WrongArg(const char* msg);
	~WrongArg();
	const char* what() const override;
private:
	const char* message;
};