# Chapter 4 Programming Projects (C++)

This directory contains C++ solutions for three programming projects:

- `days_in_a_month.cpp`: Calculates the number of days in a given month and year, accounting for leap years.
- `geometry_calculator.cpp`: A menu-driven program to calculate the area of a circle, rectangle, or triangle.
- `shipping_charges.cpp`: Calculates shipping charges based on package weight and distance.

## How to Compile and Run

To compile and run these programs, you will need a C++ compiler (like g++).

### Compiling

Open a terminal and navigate to this directory:

```bash
cd /content/Chapter4_Programming_Project_CPP/
```

Then, compile each program individually:

```bash
g++ days_in_a_month.cpp -o days_in_a_month
g++ geometry_calculator.cpp -o geometry_calculator
g++ shipping_charges.cpp -o shipping_charges
```

### Running

After compiling, you can run each executable:

```bash
./days_in_a_month
./geometry_calculator
./shipping_charges
```

## Running Tests

This project includes a comprehensive test suite for verifying all C++ programs work correctly.

### Compiling the Test Runner

To compile the test runner, you need to link it with the object files of `shipping_charges.cpp` and `days_in_a_month.cpp`:

```bash
g++ -c shipping_charges.cpp -o shipping_charges.o
g++ -c days_in_a_month.cpp -o days_in_a_month.o
g++ tests/test_runner.cpp shipping_charges.o days_in_a_month.o -o tests/test_runner
```

### Running the Tests

```bash
./tests/test_runner
```

### Test Coverage

The test runner includes:

- **shipping_charges.cpp**: Automated unit tests for `getRatePer500Miles()` function covering:
  - Valid weight ranges (0-2kg, 2-6kg, 6-10kg, 10-20kg)
  - Invalid weights (negative, zero, over 20kg)
  - Rate validation ($1.10, $2.20, $3.70, $4.80, -1 for errors)

- **days_in_a_month.cpp**: Automated unit tests for `isLeapYear()` function covering:
  - Century leap years (2000 - divisible by 400)
  - Century non-leap years (1900, 2100 - divisible by 100 but not 400)
  - Regular leap years (2004, 2008 - divisible by 4 but not 100)
  - Non-leap years (2007, 2009)




```bash
# Test days in month (February 2024 - leap year)
echo "2
2024" | ./days_in_a_month

# Test shipping charges (1.5kg, 400 miles)
echo "1.5
400" | ./shipping_charges

# Test geometry calculator (circle with radius 5, then quit)
echo "1
5
4" | ./geometry_calculator
```

**Expected Results:**
- Days in month: "29 days" 
- Shipping charges: "The shipping charge for a 1.50 kg package over 400.00 miles is: $1.10"
- Geometry calculator: "The area of the circle is: 78.54"
