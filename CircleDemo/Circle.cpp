#include <math.h>
#include <iostream>
#include "Circle.h"

using namespace std;

Circle::Circle(double radius){
	setRadius(radius);
}

void Circle::setRadius(double r){
	Radius = r;
	Area = pi() * pow(r, 2);		
	Ference = 2 * pi() * r;
}

void Circle::setFerence(double f){
	Ference = f;
	double den = 2 * pi(); // denominator
	Radius = Ference / den;
	Area = pi() * sqrt(Radius);
}

void Circle::setArea(double a){
	Area = a;
	Radius = sqrt( Area / pi() );
	Ference = 2 * pi() * Radius;
}

void Circle::printFields(){
	cout << "Radius value:\t" << Radius << endl;
	cout << "Area value:\t" << Area << endl;
	cout << "Ference value:\t" << Ference << endl;
}

double Circle::getRadius(){
	return Radius;
}

double Circle::getArea(){
	return Area;
}

double Circle::getFerence(){
	return Ference;
}

double Circle::pi(){
	return 3.14159;
}