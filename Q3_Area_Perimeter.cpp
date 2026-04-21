/*
Calculating the area and perimeter of a square:
BEGIN
    Declare side as double
    Declare area as double
    Declare perimeter as double

    REPEAT
        DISPLAY "Enter the side length of the square (or a negative number to exit): "
        READ side
        IF invalid THEN re-prompt
        IF side <= 0 THEN re-prompt
    Until side is valid

    FUNCTION computeArea(side):
        Return side * side

    FUNCTION computePerimeter(side):
        Return 4 * side

    area = computeArea(side)
    perimeter = computePerimeter(side)

    DISPLAY area
    DISPLAY perimeter
END

DSA Approach:
Operation: This involves a few arithmetic operations (multiplication and addition).
Time Complexity: O(1) - The operations take constant time.
Space Complexity: O(1) - We are using a constant amount of space for variables.

Edge Cases:
- If the user enters a negative side length, the program should prompt them to enter a valid side length.
- If the user enters zero, the area and perimeter should be calculated as zero.
- Non-numeric input should be handled to prevent errors.
- Extremely large input values should be considered to avoid overflow issues, although in this case, the
*/

#include <iostream>
using namespace std;

// Function to compute area of a square
double computeArea(double side)
{
    return side * side;
}

// Function to compute perimeter of a square
double computePerimeter(double side)
{
    return 4 * side;
}

int main()
{
    double side;

    // Keep prompting until valid input is received
    while (true)
    {
        cout << "Enter the side length of the square: ";
        cin >> side;

        // Check 1: Was the input a valid number?
        if (cin.fail())
        {
            cin.clear();            // Clear the error flag
            cin.ignore(1000, '\n'); // Discard bad input from buffer
            cout << "Error: Invalid input. Please enter a numeric value." << endl;
            continue;
        }

        // Check 2: Is the side length negative?
        if (side < 0)
        {
            cout << "Error: Side length cannot be negative. Try again." << endl;
            continue;
        }

        // Check 3: Is the side length zero?
        if (side == 0)
        {
            cout << "Error: Side length cannot be zero. Try again." << endl;
            continue;
        }

        // Valid input — exit loop
        break;
    }

    // Call functions to compute area and perimeter
    double area = computeArea(side);
    double perimeter = computePerimeter(side);

    // Display results to 2 decimal places
    cout << fixed;
    cout.precision(2);
    cout << "\nSquare with side length " << side << ":" << endl;
    cout << "Area      = " << area << " square units" << endl;
    cout << "Perimeter = " << perimeter << " units" << endl;

    return 0;
}