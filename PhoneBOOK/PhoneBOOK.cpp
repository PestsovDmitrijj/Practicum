#include "PhoneBOOK.h"

//private



//public
PhoneBOOK::PhoneBOOK(){
	pb_current_id = 0;
};

void PhoneBOOK::push( string name, string number ){
	bool resolution;
	for( int i = 0; i < number.size(); i++ ){
		if (number[i] >= '0' && number[i] <= '9') resolution = true;
		else {
			resolution = false;
			break;
		}
	}

	if ( resolution == true ){
		int index;
		for( int i = 0; i < 10; i++ ){
			if( pb_name[i].name == name ){
				resolution = false;
				index = i;
				break;
			}
		}

		if( resolution == true ){
			pb_name[pb_current_id].id = pb_current_id;
			pb_name[pb_current_id].name = name;
			pb_number[pb_current_id].id_name = pb_current_id;
			pb_number[pb_current_id].number = number;
		} else {
			pb_number[pb_current_id].id_name = pb_name[index].id;
			pb_number[pb_current_id].number = number;
		}
		
		pb_current_id++;
	} else cout << "Wrong number!" << endl;
	
};

string PhoneBOOK::pop(int index){
	string result;

	result = pb_number[index].number;
	for( int i = 0; i < 10; i++ ){
		if( pb_number[index].id_name == pb_name[i].id ){
			result += " " + pb_name[i].name;
			break;
		}
	}

	return result;
};

int PhoneBOOK::size(){
	return pb_current_id;
};

string PhoneBOOK::get( int index ){
	return pb_number[index].number;
};

string PhoneBOOK::search( string name ){
	string result;
	for ( int i = 0; i < size(); i++ ){
		if( pb_name[i].name == name ){
			for( int j = 0; j < size(); j++ ){
				if( pb_number[j].id_name == pb_name[i].id ){
					result += pb_number[j].number + " ";
				}
			}
		}
	}


	return result;
};

