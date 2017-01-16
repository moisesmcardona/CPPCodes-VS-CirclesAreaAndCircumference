//class declaration section (header file)  
class Circles
{
public:
	void setCenter(int x, int y);
	double findArea();
	double findCircumference();
	void printCircleStats(); // This outputs the radius and center of the circle. 
	Circles(float r); // Constructor 
	Circles(); // Default constructor 
	Circles(float r, double x, double y);
	Circles(double x, double y);
	~Circles();
private:
	float radius;
	int center_x;
	int center_y;
};