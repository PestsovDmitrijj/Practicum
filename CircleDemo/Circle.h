#include <math.h>
#include <iostream>

using namespace std;

class Circle {
public:
	Circle();

	Circle(double radius){
		setRadius(radius);
	}

	void setRadius(double r){
		Radius = r;
		Area = pi() * pow(r, 2);
		Ference = 2 * pi() * r;
	}

	void setFerence(double f){
		Ference = f;
		double den = 2 * pi(); // denominator
		Radius = Ference / den;
		Area = pi() * sqrt(Radius);
	}
	
	void setArea(double a){
		Area = a;
		Radius = sqrt( Area / pi() );
		Ference = 2 * pi() * Radius;
	}

	void printFields(){
		cout << "Radius value:\t" << Radius << endl;
		cout << "Area value:\t" << Area << endl;
		cout << "Ference value:\t" << Ference << endl;
	}

	double getRadius(){
		return Radius;
	}

	double getArea(){
		return Area;
	}

	double getFerence(){
		return Ference;
	}

private:
	static double pi(){
		return 3.14159;
	}
	double Radius;
	double Ference;
	double Area;
};