#include <iostream>
#include <cmath>
#include <limits>

const double PI = 3.14159;

void calculateCircleArea() {
    double radius;
    std::cout << "Enter the radius of the circle: ";
    if (!(std::cin >> radius)) {
        std::cout << "Invalid input. Please enter a number for the radius." << std::endl;
        return;
    }
    if (radius < 0) {
        std::cout << "Error: Radius cannot be negative." << std::endl;
        return;
    }
    double area = PI * radius * radius;
    std::cout.precision(2);
    std::cout << std::fixed;
    std::cout << "The area of the circle is: " << area << std::endl;
}

void calculateRectangleArea() {
    double length, width;
    std::cout << "Enter the length of the rectangle: ";
    if (!(std::cin >> length)) {
        std::cout << "Invalid input. Please enter a number for the length." << std::endl;
        return;
    }
    std::cout << "Enter the width of the rectangle: ";
    if (!(std::cin >> width)) {
        std::cout << "Invalid input. Please enter a number for the width." << std::endl;
        return;
    }
    if (length < 0 || width < 0) {
        std::cout << "Error: Length and width cannot be negative." << std::endl;
        return;
    }
    double area = length * width;
    std::cout.precision(2);
    std::cout << std::fixed;
    std::cout << "The area of the rectangle is: " << area << std::endl;
}

void calculateTriangleArea() {
    double base, height;
    std::cout << "Enter the base of the triangle: ";
    if (!(std::cin >> base)) {
        std::cout << "Invalid input. Please enter a number for the base." << std::endl;
        return;
    }
    std::cout << "Enter the height of the triangle: ";
    if (!(std::cin >> height)) {
        std::cout << "Invalid input. Please enter a number for the height." << std::endl;
        return;
    }
    if (base < 0 || height < 0) {
        std::cout << "Error: Base and height cannot be negative." << std::endl;
        return;
    }
    double area = base * height * 0.5;
    std::cout.precision(2);
    std::cout << std::fixed;
    std::cout << "The area of the triangle is: " << area << std::endl;
}

int geometry_calculator() {
    int choice;
    while (true) {
        std::cout << "\nGeometry Calculator" << std::endl;
        std::cout << "    1. Calculate the Area of a Circle" << std::endl;
        std::cout << "    2. Calculate the Area of a Rectangle" << std::endl;
        std::cout << "    3. Calculate the Area of a Triangle" << std::endl;
        std::cout << "    4. Quit" << std::endl;
        std::cout << "    Enter your choice (1-4): ";

        if (!(std::cin >> choice)) {
            std::cout << "Error: Invalid input. Please enter a number." << std::endl;
            // Clear the error flag and discard the input
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        if (choice == 1) {
            calculateCircleArea();
        } else if (choice == 2) {
            calculateRectangleArea();
        } else if (choice == 3) {
            calculateTriangleArea();
        } else if (choice == 4) {
            std::cout << "Exiting the program. Goodbye!" << std::endl;
            break;
        } else {
            std::cout << "Error: Invalid choice. Please enter a number between 1 and 4." << std::endl;
        }
    }
    return 0;
}

int main() {
    return geometry_calculator();
}