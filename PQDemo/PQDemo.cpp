#include "PQueue.h"

int main() {

	PQueue<int> p;
	p.push(123, 12);
	p.push(404, 11);
	cout << p.printElem(1) << endl;
	cout << p.length() << endl;
	p.clear();
	cout << p.length() << endl;
	p.push(12, 2);
	p.push(4, 8);
	p.push(5, 0);
//	p.push(7, 1);
	for( int i = 0; i < p.length(); i++ ){
		cout << p.printElem(i) << " ";
	}
	cout << endl;
	cout << p.pop() << endl;
	for( int i = 0; i < p.length(); i++ ){
		cout << p.printElem(i) << " ";
	}



	char stop;
	cin >> stop;
	return 0;
}