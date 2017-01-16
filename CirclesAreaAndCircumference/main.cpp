#include <iostream> 
#include "circles.h"
using namespace std;
// 
// This program declares a class for a circle that will have 
// member functions that set the center, find the area, find 
// the circumference and display these attributes. 
// The program as written does not allow the user to input data, but 
// rather has the radii and center coordinates of the circles 
// (spheres in the program) initialized at definition or set by a function. 
int main()
{
	//Circle #1
	Circles sphere(8);
	sphere.setCenter(9, 10);
	cout << "Circle #1" << endl;
	sphere.printCircleStats();	
	cout << "The area of the circle is " << sphere.findArea() << endl;
	cout << "The circumference of the circle is " << sphere.findCircumference() << endl;
	//Circle #2
	Circles sphere2;
	cout << "Circle #2" << endl;
	sphere2.printCircleStats();
	cout << "The area of the circle is " << sphere2.findArea() << endl;
	cout << "The circumference of the circle is " << sphere2.findCircumference() << endl;
	//Circle #3
	Circles sphere3(15, 16);
	cout << "Circle #3" << endl;
	sphere3.printCircleStats();
	cout << "The area of the circle is " << sphere3.findArea() << endl;
	cout << "The circumference of the circle is " << sphere3.findCircumference() << endl;
	system("pause");
	return 0;
	
}
