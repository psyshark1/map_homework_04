#include"Line.h"
#include"Cube.h"
#include"Circle.h"
#include"Cylinder.h"

int main(int argc, char** argv)
{
	std::list<Point> lp2{ Point{1,1,0} };
	std::list<Point> lp{ Point{1,1,0} ,Point{ 1,2,0 } };
	std::list<Point> lp1{ Point{3,9,0}, Point{7,9,0}, Point{7,5,0}, Point{3,5,0} };
	try
	{
		Line ln{ lp };
		Square sq{lp1};
		Circle cr{ lp2 , 2 };
		ln.shift(4);
		std::cout << ln.get_length() << std::endl;
	}
	catch (const WrongArg& e)
	{
		std::cout << e.what() << std::endl;
		return 13;
	}
	
	return 0;
}