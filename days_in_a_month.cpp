#include <iostream>

// Function to determine if a year is a leap year
bool isLeapYear(int year) {
    if ((year % 100 == 0 && year % 400 == 0) || (year % 100 != 0 && year % 4 == 0)) {
        return true;
    }
    return false;
}

int days_in_a_month() {
    int month, year;

    // Get month and year from the user
    std::cout << "Enter a month (1–12): ";
    if (!(std::cin >> month)) {
        std::cout << "Invalid input: Please enter an integer for the month." << std::endl;
        return 1;
    }

    std::cout << "Enter a year: ";
    if (!(std::cin >> year)) {
        std::cout << "Invalid input: Please enter an integer for the year." << std::endl;
        return 1;
    }

    // Input validation for the month
    if (month < 1 || month > 12) {
        std::cout << "Invalid input: Month must be between 1 and 12." << std::endl;
        return 1;
    }

    // Determine the number of days based on the month
    if (month == 2) { // February
        if (isLeapYear(year)) {
            std::cout << "29 days" << std::endl;
        } else {
            std::cout << "28 days" << std::endl;
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) { // April, June, September, November
        std::cout << "30 days" << std::endl;
    } else { // All other months
        std::cout << "31 days" << std::endl;
    }

    return 0;
}

int main() {
    return days_in_a_month();
}