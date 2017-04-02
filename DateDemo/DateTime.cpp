#include "DateTime.h"

//public
DateTime::DateTime(int dd, int mm, int yy){
	time( &It );
	struct tm* t;
	t = localtime( &It );            
	t -> tm_mday = dd;
	t -> tm_mon = mm - 1;
	t -> tm_year = yy - 1900;                    
	It = mktime( t );
};

DateTime::DateTime(){
	time(&It);
};

DateTime::DateTime(const DateTime &dateTime) {
    It = dateTime.getIt();
}

void DateTime::printToday(){
	printDate(0);
};

void DateTime::printYesterday(){ 
	printDate(-1);
}
void DateTime::printTomorrow(){
	printDate(1);
}
void DateTime::printFuture(int days){
	printDate(days);
}
void DateTime::printPast(int days){
	printDate(-days);
}

void DateTime::printMonth(){
	cout << put_time( localtime(&It), "%B") << endl;
}

void DateTime::printWeekDay(){
	cout << std::put_time( localtime(&It), "%A") << endl;
}	

int DateTime::calcDifference(DateTime date){
	return It / 86400 - date.getIt() / 86400; 
}

//private
time_t DateTime::getIt() const {
    return It;
}

void DateTime::printDate(int days) {
	time_t printIt = It + days * 86400;
	cout << put_time( localtime( &printIt ), "%A, %d %B %Y") << endl;
}
