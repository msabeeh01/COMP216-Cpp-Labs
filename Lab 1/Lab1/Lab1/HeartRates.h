#include <iostream>
#include <string>
#include "Dates.h"
class HeartRates
{
private:
	string _firstName;
	string _lastName;
	Dates _dob;
	int currentYear;
	int _age;

public:
	HeartRates(string firstName, string lastName, int month, int year, int day) {
		_firstName = firstName;
		_lastName = lastName;
		_dob = Dates(month, year, day);
	}

	string getFirstName() {
		return _firstName;
	}
	string getLastName() {
		return _lastName;
	}

	int getMaximumHeartRate(){
		return 220 - _age;
	}
	int getMinimumTargetHeartRate() {
		return 0.5 * getMaximumHeartRate();
	}
	int getMaximumTargetHeartRate() {
		return 0.8 * getMaximumHeartRate();
	}
	int getYear(){
		_dob.getYear();
	}
	int getDay() {
		_dob.getDay();
	}
	int getMonth() {
		_dob.getMonth();
	}
	int getAge(int currentMonth, int currentYear, int currentDay) {
		int dobDays = (_dob.getMonth() * 30 + _dob.getYear() * 265 + _dob.getDay());
		int currentDays = (currentMonth * 30 + currentDay + currentYear * 365);
		int days = currentDays - dobDays;

		_age = days / 365;
		return _age;
	}

	void setFirstName(string firstname) {
		_firstName = firstname;
	}
	void setLastName(string lastname) {
		_lastName = lastname;
	}
	void setDOB(int day, int month, int year) {
		_dob.setDay(day);
		_dob.setMonth(month);
		_dob.setYear(year);
	}

};

