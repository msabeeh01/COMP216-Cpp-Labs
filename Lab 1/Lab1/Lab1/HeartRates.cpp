
// Driver program for HeartRates class
#include <iostream>
#include <string>
#include "HeartRates.h"
using namespace std;

int main()
{
    string firstName;
    string lastName;
    int month;
    int day;
    int year;

    // get user input
    cout << "Please enter first and last name: ";
    cin >> firstName >> lastName;
    cout << "Please enter month, day, and year of birth: ";
    cin >> month >> day >> year;

    // create a HeartRates object
    HeartRates heartRates{ firstName, lastName, month, day, year };

    // display user information
    cout << "First Name: " << heartRates.getFirstName() << "\n";
    cout << "Last Name: " << heartRates.getLastName() << "\n";
    cout << "Date of Birth: " << heartRates.getMonth() << "/"
        << heartRates.getDay() << "/"
        << heartRates.getYear() << "\n";
    cout << "Age: " << heartRates.getAge(month, year, day) << "\n";
    cout << "Maximum Heart Rate: "
        << heartRates.getMaximumHeartRate() << "\n";
    cout << "Target Heart Rate: "
        << heartRates.getMinimumTargetHeartRate() << "-"
        << heartRates.getMaximumTargetHeartRate() << "\n";
}



