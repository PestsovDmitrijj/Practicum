class Circle {
public:
	Circle();
	Circle(double radius);
	void setRadius(double r);
	void setFerence(double f);
	void setArea(double a);
	void printFields();
	double getRadius();
	double getArea();
	double getFerence();

private:
	static double pi();
	double Radius;
	double Ference;
	double Area;
};