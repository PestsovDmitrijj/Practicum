#include "PhoneBOOK.h"

int main() {
	PhoneBOOK pb;
	pb.push("Joshua","123");
	pb.push("Bill","34343");
	pb.push("Joshua","321");

	for( int i = 0; i < pb.size(); i++ ){
		cout << pb.pop(i) << endl;
	}

	string search;
	cin >> search;
	cout << pb.search( search );

	char stop;
	cin >> stop;
	return 0;
}