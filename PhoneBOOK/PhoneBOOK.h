#include <iostream>
#include <vector>
#include <string>
#include "name.h"
#include "number.h"

using namespace std;

#ifndef PhoneBOOK_H_
#define PhoneBOOK_H_

class PhoneBOOK {
private:
	name_con pb_name[10];
	number_con pb_number[10];
	int pb_current_id;

public:
	PhoneBOOK();
	void push( string, string );
	string pop( int );
	int size();
	string get(int);
	string search( string );

};

#endif