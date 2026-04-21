/* Transforming pseudo code to C++ code:

Understanding the Pseudo Code:
x = 0, y = 20

REPEAT
  y = y - 4        → y goes: 20→16→12→8→4
  x = x + (2/y)   → adds fraction each iteration

UNTIL y < 6        → stops when y reaches 4

DSA Approach:
Operation: This involves a few arithmetic operations (subtraction and addition).
Time Complexity: O(1) - The number of iterations is fixed and does not depend on the input size.
Space Complexity: O(1) - We are using a constant amount of space for variables.

Edge Cases:
- The loop will execute a fixed number of times (5 iterations) since y starts at 20 and is decremented by 4 each time until it is less than 6.
- The value of x will be updated in each iteration based on the current value of y, which will affect the final output.
- The program should handle the division by y correctly, ensuring that it does not attempt to divide by zero, which is not a concern in this specific case since y will never reach zero.
- The final values of x and y should be printed after the loop completes to verify the correctness of the implementation.

*/

#include <iostream>
using namespace std;

int main()
{
    // Initialize variables as specified in pseudocode
    double x = 0; // SET x TO 0
    int y = 20;   // SET y TO 20

    // REPEAT...UNTIL loop implemented as do-while in C++
    // do-while guarantees at least one execution
    // matching the REPEAT...UNTIL behaviour in pseudocode
    do
    {
        y = y - 4;         // SUBTRACT 4 FROM y
        x = x + (2.0 / y); // ADD 2/y TO x
                           // 2.0/y used to avoid integer division truncation

    } while (y >= 6); // UNTIL y IS LESS THAN 6
                      // Inverted condition for do-while

    // Display result to 4 decimal places
    cout << fixed;
    cout.precision(4);
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    return 0;
}