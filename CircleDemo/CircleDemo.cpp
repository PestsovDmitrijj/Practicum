#include <conio.h>
#include <iostream>
#include "Circle.h"

using namespace std;


int main() {
//	double r;
//	double f;
//	double a;

	//Testing the class Circle
	/*
	cout << "Enter a radius value: ";
	cin >> r;
	cout << endl;
	Circle c = Circle(r);
	c.printFields();

	cout << "Demonstration of the method setRadius; enter a radius value: ";
	cin >> r;
	c.setRadius(r);
	c.printFields();

	cout << "Demonstration of the method setFerence; enter a ference value: ";
	cin >> f;
	c.setFerence(f);
	c.printFields();

	cout << "Demonstration of the method setArea; enter an area value: ";
	cin >> a;
	c.setArea(a);
	c.printFields();

	cout << endl << "Testing complete." << endl;
	*/

	cout << "Earth and rope." << endl;
	
	Circle earth = Circle(6378100); //value in meters
	Circle rope = Circle(1);
	rope.setFerence( earth.getFerence() + 1 );
	cout << "The gap is " << rope.getRadius() - earth.getRadius() << " meters" << endl; 

	cout << "Pool." << endl;

	Circle pool = Circle(3);
	Circle track = Circle(4);
	cout << "cost of a track: " << ( track.getArea() - pool.getArea() ) * 1000 << " rub." << endl;
	cout << "cost of a fence: " << track.getFerence() * 2000 << " rub." << endl;

	_getch();
	return 0;
}