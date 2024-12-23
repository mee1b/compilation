#include <iostream>
using namespace std;

struct point
{
	double m_x, m_y;
	point(double x, double y)
	{
		m_x = x;
		m_y = y;
	}
};

static void print_point(const point& point_object);

int main()
{
	point my_point(0, 0);
	for (double i = 0; i < 5; ++i)
	{
		my_point.m_x = i;
		my_point.m_y = (2 * i);
		print_point(my_point);
	}
}

static void print_point(const point& point_object)
{
	cout << "x: " << point_object.m_x << ", y: " << point_object.m_y << endl;
}