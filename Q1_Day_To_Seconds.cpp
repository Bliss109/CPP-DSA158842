// Day to Seconds Converter
/* Understanding the Problem:
   - Input: Number of days (from user)
   - Output: Equivalent number of seconds

   Conversion logic:
    - 1 day = 24 hours
    - 1 hour = 60 minutes
    - 1 minute = 60 seconds

    Therefore:
    1 day = 24 * 60 * 60 seconds = 86400 seconds
    N days = N * 86400 seconds

    DSA Approach:
    Operation:  This is a simple multiplication operation.
    Time Complexity: O(1) - The operation takes constant time.
    Space Complexity: O(1) - We are using a constant amount of space for variables.

    Edge Cases:
    - If the user enters 0 days, the output should be 0 seconds.
    - If the user enters a negative number of days, we can either handle it as an error or convert it to seconds (which would be negative).
    - Non-integer input should be handled to prevent errors.
    - Extremely Large input values should be considered to avoid overflow issues, although in this case, the maximum value for an integer in C++ is sufficient for a reasonable number of days.
    - Decimal input should be handled to ensure that only whole days are considered, or we can choose to allow decimal days and convert them accordingly.
*/

#include <iostream>
using namespace std;

int main()
{
    long long days;
    long long seconds;

    while (true)
    {
        cout << "Enter the number of days: ";
        cin >> days;

        // First check: Validate input
        if (cin.fail())
        {
            cin.clear();            // Clear the error flag
            cin.ignore(1000, '\n'); // Ignore the invalid input
            cout << "Error: Invalid input. Please enter a whole number. " << endl;
            continue; // Prompt the user again
        }
        // Second check: Handle negative input
        if (days < 0)
        {
            cout << "Error: Number of days cannot be negative. Try again." << endl;
            continue; // Prompt the user again
        }
        // Exit the loop
        break;
    }

    // Handles zero separately to avoid unnecessary multiplication
    if (days == 0)
    {
        cout << "0 day(s) is equal to 0 seconds." << endl;
        return 0;
    }

    // Convert days to seconds
    seconds = days * 86400; // 1 day = 86400 seconds

    cout << days << " day(s) is equal to " << seconds << " seconds." << endl;
    return 0;
}