#include <iostream>
#include <string>

class Dates {
private:
	int _day;
	int _month;
	int _year;
public:
	Dates(int day, int month, int year) {
		_day = day;
		_month = month;
		_year = year;
	}

	void setDay(int day){
		_day = day;
	}
	void setMonth(int month) {
		_month = month;
	}
	void setYear(int year) {
		_year = year;
	}

	int getDay() {
		return _day;
	}
	int getMonth() {
		return _month;
	}
	int getYear() {
		return _year;
	}
};
