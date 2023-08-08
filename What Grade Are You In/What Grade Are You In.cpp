#include <iostream>
#include <string>

int main() {
    int grade;

    std::cout << "Enter your Grade: ";
    std::cin >> grade;

    std::string highSchoolName;

    switch (grade) {
    case 9:
        highSchoolName = "Freshman";
        break;
    case 10:
        highSchoolName = "Sophomore";
        break;
    case 11:
        highSchoolName = "Junior";
        break;
    case 12:
        highSchoolName = "Senior";
        break;
    default:
        highSchoolName = "Invalid";
        break;
    }

    if (highSchoolName != "Invalid") {
        std::cout << "You are in your " << highSchoolName << " year of High School!";
    }
    else {
        std::cout << "Invalid grade entered. Please try again.";
    }

    return 0;
}

