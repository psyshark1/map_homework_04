class Point
{
public:
	Point(double& _x, double& _y, double _z);
	Point(double&& _x, double&& _y, double _z);
	~Point();
	double X;
	double Y;
	double Z;
	bool operator== (const Point& rp) const
	{
		return (this->X == rp.X && this->Y == rp.Y && this->Z == rp.Z) ? true : false;
	}
};	