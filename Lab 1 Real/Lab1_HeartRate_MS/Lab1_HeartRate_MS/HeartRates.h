#include <iostream>

class HeartRates {
private:
    std::string firstName;
    std::string lastName;
    int birthMonth;
    int birthDay;
    int birthYear;

public:
    HeartRates(std::string fname, std::string lname, int month, int day, int year) {
        firstName = fname;
        lastName = lname;
        birthMonth = month;
        birthDay = day;
        birthYear = year;
    }

    void setFirstName(std::string fname) {
        firstName = fname;
    }

    std::string getFirstName() {
        return firstName;
    }

    void setLastName(std::string lname) {
        lastName = lname;
    }

    std::string getLastName() {
        return lastName;
    }

    void setBirthMonth(int month) {
        birthMonth = month;
    }

    int getBirthMonth() {
        return birthMonth;
    }

    void setBirthDay(int day) {
        birthDay = day;
    }

    int getBirthDay() {
        return birthDay;
    }

    void setBirthYear(int year) {
        birthYear = year;
    }

    int getBirthYear() {
        return birthYear;
    }

    int getAge() {
        int currentMonth, currentDay, currentYear;
        std::cout << "Enter current month (1-12): ";
        std::cin >> currentMonth;
        std::cout << "Enter current day: ";
        std::cin >> currentDay;
        std::cout << "Enter current year: ";
        std::cin >> currentYear;

        int age = currentYear - birthYear;
        if (currentMonth < birthMonth || (currentMonth == birthMonth && currentDay < birthDay)) {
            age--;
        }
        return age;
    }

    int getMaximumHeartRate() {
        return 220 - getAge();
    }


    int getTargetHeartRate() {
        int maxHeartRate = getMaximumHeartRate();
        return maxHeartRate * 0.5 + maxHeartRate * 0.85;
    }
};