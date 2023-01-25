
// Driver program for HeartRates class
#include <iostream>
#include "HeartRates.h"

int main() {
    std::string firstName, lastName;
    int birthMonth, birthDay, birthYear;

    HeartRates heartRates(firstName, lastName, birthMonth, birthDay, birthYear);

    std::cout << "First Name: " << heartRates.getFirstName() << "\n";
    std::cout << "Last Name: " << heartRates.getLastName() << "\n";
    std::cout << "Date of Birth: " << heartRates.getBirthMonth() << "/"
        << heartRates.getBirthDay() << "/"
        << heartRates.getBirthYear() << "\n";
    std::cout << "Age: " << heartRates.getAge() << "\n";
    std::cout << "Maximum Heart Rate: "
        << heartRates.getMaximumHeartRate() << "\n";
    std::cout << "Target Heart Rate: "
        << heartRates.getTargetHeartRate();

    std::cout << "Name: " << heartRates.getFirstName() << " " << heartRates.getLastName() << std::endl;

    system("pause");
}


