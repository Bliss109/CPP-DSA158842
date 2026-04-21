/*
Understanding the problem:
- Fixed size array of 5 elements
- User inputs 5 values one by one
- Calculate average of all 5 values
- Display the average

Average = Sum of all elements / Number of elements

BEGIN
  DECLARE array[5] AS double
  DECLARE sum AS double = 0
  DECLARE average AS double

  FOR i = 0 TO 4
    REPEAT
      DISPLAY "Enter value i+1: "
      READ array[i]
      IF invalid THEN re-prompt
    UNTIL valid input

    ADD array[i] TO sum

  COMPUTE average = sum / 5

  DISPLAY array values
  DISPLAY average
END

DSA Approach:
Operation: This involves iterating through the array to calculate the sum and then performing a division to
calculate the average.
Time Complexity: O(n) - We need to iterate through the array once to calculate the sum
Space Complexity: O(1) - We are using a constant amount of space for the sum and average variables.

Edge Cases:
- If the user enters non-numeric input, the program should prompt them to enter a valid
number.
- If the user enters extremely large values, we should consider the possibility of overflow when calculating the
sum, although in this case, the maximum value for a double in C++ is sufficient for reasonable inputs.
- The program should handle decimal input correctly since we are using double data type for the array and
average.
- Negative numbers should be accepted as valid input since they can be part of the average calculation.
- Mixed +/- input should be handled correctly as well.
*/
#include <iostream>
using namespace std;

int main()
{
    // Define array size as a constant
    // Easy to change array size here without touching rest of code
    const int SIZE = 5;

    // Declare array and tracking variables
    double array[SIZE];
    double sum = 0;
    double average;

    cout << "=== Array Average Calculator ===" << endl;
    cout << "Enter " << SIZE << " values:" << endl
         << endl;

    // Loop to populate array with user input
    for (int i = 0; i < SIZE; i++)
    {

        // Keep prompting until valid input is received
        while (true)
        {
            cout << "Enter value " << (i + 1) << " of " << SIZE << ": ";
            cin >> array[i];

            // Check: Was the input a valid number?
            if (cin.fail())
            {
                cin.clear();            // Clear the error flag
                cin.ignore(1000, '\n'); // Discard bad input from buffer
                cout << "Error: Invalid input. Please enter a numeric value." << endl;
                continue;
            }

            // Valid input — exit inner loop
            break;
        }

        // Accumulate sum as values are entered
        sum += array[i];
    }

    // Calculate average
    average = sum / SIZE;

    // Display all values entered
    cout << "\n=== Results ===" << endl;
    cout << "Values entered: ";
    for (int i = 0; i < SIZE; i++)
    {
        cout << array[i];
        // Print comma after each value except the last
        if (i < SIZE - 1)
        {
            cout << ", ";
        }
    }

    // Display sum and average to 2 decimal places
    cout << fixed;
    cout.precision(2);
    cout << "\nSum     = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}