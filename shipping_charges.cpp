#include <iostream>
#include <cmath>
#include <limits>

// Function to get the shipping rate per 500 miles based on package weight
double getRatePer500Miles(double weight) {
    if (weight > 0 && weight <= 2) {
        return 1.10;
    } else if (weight > 2 && weight <= 6) {
        return 2.20;
    } else if (weight > 6 && weight <= 10) {
        return 3.70;
    } else if (weight > 10 && weight <= 20) {
        return 4.80;
    } else {
        return -1; // Indicates an invalid weight
    }
}

int shipping_charges() {
    double weight, distance;

    // Get weight and distance from the user
    std::cout << "Enter the weight of the package (in kg): ";
    if (!(std::cin >> weight)) {
        std::cout << "Invalid input: Please enter a number for weight." << std::endl;
        return 1;
    }

    std::cout << "Enter the distance to be shipped (in miles): ";
    if (!(std::cin >> distance)) {
        std::cout << "Invalid input: Please enter a number for distance." << std::endl;
        return 1;
    }

    // Input validation for weight and distance
    if (weight <= 0 || weight > 20) {
        std::cout << "Invalid input: Weight must be between 0 and 20 kg." << std::endl;
        return 1;
    }
    if (distance < 10 || distance > 3000) {
        std::cout << "Invalid input: Distance must be between 10 and 3,000 miles." << std::endl;
        return 1;
    }

    // Get the rate and handle invalid weights
    double rate = getRatePer500Miles(weight);
    if (rate == -1) {
        std::cout << "Error determining rate for the given weight." << std::endl;
        return 1;
    }

    // Calculate the total shipping cost
    double shippingCost = std::ceil(distance / 500) * rate;

    // Display the result, formatted to two decimal places
    std::cout.precision(2);
    std::cout << std::fixed;
    std::cout << "\nThe shipping charge for a " << weight << " kg package over " << distance << " miles is: $" << shippingCost << std::endl;

    return 0;
}

int main() {
    return shipping_charges();
}