#include <iostream>
#include <vector>

#ifndef PQUEUE_H_
#define PQUEUE_H_

using namespace std;

template<typename T>
class PQueue {
private:
	vector<T> p_arr;
	vector<short> p_priority;
	int p_currentIndex;
public:
	PQueue(){
		p_currentIndex = 0;
	};
	PQueue(const PQueue &pq) {
		p_arr = pq.getArr();
		p_priority = pq.getPrio();
	};
	vector<T> getArr(){
		return p_arr;
	};
	vector<short> getPrio(){
		return p_priority;
	};
	~PQueue(){ 
		p_arr.~vector();
		p_priority.~vector();
	};
	void push(T elem, short priority) {
		p_arr.push_back(elem);
		p_priority.push_back(priority);
	};
	T printElem(short index){
		return p_arr[index];
	};
	short length(){
		return p_arr.size();
	};
	void clear(){
		p_arr.clear();
		p_priority.clear();
	};
	T pop(){
		short max_val = p_priority[0];
		short index;
		for( int i = 0; i < p_priority.size(); i++ ){
			if( p_priority[i] < max_val ) max_val = p_priority[i];
		}
		for( int i = 0; i < p_priority.size(); i++ ){
			if( p_priority[i] == max_val )index = i;
		}
	T result = p_arr[index];
	
	vector<T> bufArr;
	vector<short> bufPri;
	for( int i = 0; i < p_arr.size(); i++ ){
		if( i != index ) {
			bufArr.push_back( p_arr[i] );
			bufPri.push_back( p_priority[i] );
		}
	}
	clear();
	for( int i = 0; i < bufArr.size(); i++ ){
		p_arr.push_back( bufArr[i] );
		p_priority.push_back( bufPri[i] );
	}

	return result;
	};
};

#include "PQueue.cpp"

#endif