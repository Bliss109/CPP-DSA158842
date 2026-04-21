/* Calculating the volume of a sphere:
BEGIN
    Declare radius as double
    Declare volume as double

    REPEAT
        DISPLAY "Enter the radius of the sphere (or a negative number to exit): "
        READ radius
        IF invalid THEN re-prompt
        IF radius <= 0 THEN re-prompt
    Until radius is valid

    Compute volume using the formula: volume = (4/3) * π * radius^3

    DISPLAY volume
END

DSA Approach:
Operation: This involves a few arithmetic operations (multiplication, division, and exponentiation).
Time Complexity: O(1) - The operations take constant time.
Space Complexity: O(1) - We are using a constant amount of space for variables.

Edge Cases:
- If the user enters a negative radius, the program should prompt them to enter a valid radius.
- If the user enters zero, the volume should be calculated as zero.
- Non-numeric input should be handled to prevent errors.
- Extremely large input values should be considered to avoid overflow issues, although in this case, the maximum value for a double in C++ is sufficient for a reasonable radius.

  */

#include <iostream>
#include <cmath> // For pow() and M_PI
using namespace std;

int main()
{
    double radius;
    double volume;

    // Keep prompting until valid input is received
    while (true)
    {
        cout << "Enter the radius of the sphere: ";
        cin >> radius;

        // Check 1: Was the input a valid number?
        if (cin.fail())
        {
            cin.clear();            // Clear the error flag
            cin.ignore(1000, '\n'); // Discard bad input from buffer
            cout << "Error: Invalid input. Please enter a numeric value." << endl;
            continue;
        }

        // Check 2: Is the radius negative?
        if (radius < 0)
        {
            cout << "Error: Radius cannot be negative. Try again." << endl;
            continue;
        }

        // Check 3: Is the radius zero?
        if (radius == 0)
        {
            cout << "Error: Radius cannot be zero. Try again." << endl;
            continue;
        }

        // Valid input — exit loop
        break;
    }

    // Calculate volume
    // Formula: (4/3) * π * r^3
    // Note: 4.0/3.0 used to avoid integer division truncation
    volume = (4.0 / 3.0) * M_PI * pow(radius, 3);

    // Display result to 4 decimal places
    cout << fixed;
    cout.precision(4);
    cout << "The volume of a sphere with radius " << radius
         << " is " << volume << " cubic units." << endl;

    return 0;
}
