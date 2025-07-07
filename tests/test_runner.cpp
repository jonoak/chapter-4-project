#include <iostream>
#include <cassert>
#include <cmath>

// Functions from shipping_charges.cpp
double getRatePer500Miles(double weight);
int shipping_charges();

// Functions from days_in_a_month.cpp
bool isLeapYear(int year);
int days_in_a_month();

// Functions from geometry_calculator.cpp
void calculateCircleArea();
void calculateRectangleArea();
void calculateTriangleArea();
int geometry_calculator();

// Test for shipping_charges.cpp
void testShippingCharges() {
    assert(getRatePer500Miles(1.5) == 1.10);
    assert(getRatePer500Miles(5) == 2.20);
    assert(getRatePer500Miles(8) == 3.70);
    assert(getRatePer500Miles(15) == 4.80);
    assert(getRatePer500Miles(25) == -1); // Weight too high
    assert(getRatePer500Miles(0) == -1);  // Weight too low
    assert(getRatePer500Miles(-5) == -1); // Negative weight
    std::cout << "shipping_charges.cpp tests passed!" << std::endl;
}

// Test for days_in_a_month.cpp
void testDaysInAMonth() {
    assert(isLeapYear(2000) == true);
    assert(isLeapYear(2100) == false);
    assert(isLeapYear(2008) == true);
    assert(isLeapYear(2009) == false);
    assert(isLeapYear(1900) == false); // Not a leap year (divisible by 100 but not 400)
    assert(isLeapYear(2000) == true);  // Leap year (divisible by 400)
    assert(isLeapYear(2004) == true);  // Leap year (divisible by 4 but not 100)
    assert(isLeapYear(2007) == false); // Not a leap year
    std::cout << "days_in_a_month.cpp tests passed!" << std::endl;
}

// Test for geometry_calculator.cpp
void testGeometryCalculator() {
    
    std::cout << "geometry_calculator.cpp tests passed!" << std::endl;
}

int main() {
    testShippingCharges();
    testDaysInAMonth();
    testGeometryCalculator();

    // Now, we can optionally run the interactive programs
    // std::cout << "\nRunning interactive programs...\n";
    // shipping_charges();
    // days_in_a_month();
    // geometry_calculator();

    return 0;
}