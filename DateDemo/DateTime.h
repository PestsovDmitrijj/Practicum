#include <ctime>
#include <iostream>
#include <iomanip>

using namespace std;

class DateTime {
public:
	DateTime(int dd, int mm, int yy);	
	DateTime();
	DateTime( const DateTime &dateTime);

	void printToday();
	void printYesterday();
	void printTomorrow();
	void printFuture(int days);
	void printPast(int days);
	void printMonth();
	void printWeekDay();
	int calcDifference(DateTime date);

private:
	time_t It;
	time_t getIt() const;
	void printDate(int day);

};