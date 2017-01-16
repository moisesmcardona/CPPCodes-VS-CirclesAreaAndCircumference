#include <iostream>
#include "circles.h"
using namespace std;

Circles::Circles()
{
	radius = 1;
	center_x = 0;
	center_y = 0;
}
Circles::Circles(float r)
{
	radius = r;
	center_x = 0;
	center_y = 0;
}
Circles::Circles(float r, double x, double y)
{
	radius = r;
	center_x = x;
	center_y = y;
}
Circles::Circles(double x, double y)
{
	radius = 1;
	center_x = x;
	center_y = y;
}
Circles::~Circles()
{
	cout << "This concludes the Circles class" << endl;
}
double Circles::findArea()
{
	double area;
	const double PI = 3.14;
	area = (PI * radius * radius);
	return area;
}
double Circles::findCircumference()
{
	const double PI = 3.14;
	double diameter, circumference;
	diameter = radius * 2;
	circumference = PI * diameter;
	return circumference;
}
void Circles::printCircleStats()
// This procedure prints out the radius and center coordinates of the circle 
// object that calls it. 
{
	cout << "The radius of the circle is " << radius << endl;
	cout << "The center of the circle is (" << center_x
		<< "," << center_y << ")" << endl;
}
void Circles::setCenter(int x, int y)
// This procedure will take the coordinates of the center of the circle from 
// the user and place them in the appropriate member data. 
{
	center_x = x;
	center_y = y;
}
