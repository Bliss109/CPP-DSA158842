/* Find if a character is uppercase or lowercase:
BEGIN
    Declare character as char

    REPEAT
        DISPLAY "Enter a character (or '0' to exit): "
        READ character
        IF invalid THEN re-prompt
        IF character == '0' THEN exit
    Until character is valid

    FUNCTION checkCase(ch)
        IF ch >= 'A' AND ch <= 'Z' THEN
            Return "Uppercase"
        ELSE IF ch >= 'a' AND ch <= 'z' THEN
            Return "Lowercase"
        ELSE
            Return "Neither"

    DISPLAY result
END

DSA Approach:
ASCII values:
A = 65 ... Z = 90   → Uppercase range
a = 97 ... z = 122  → Lowercase range

isupper(ch) checks if ch falls in 65-90
islower(ch) checks if ch falls in 97-122
isalpha(ch) checks if ch is a letter at all
Operation: This involves a few conditional checks to determine the case of the character.
Time Complexity: O(1) - The operations take constant time.
Space Complexity: O(1) - We are using a constant amount of space for variables.

Edge Cases:
- If the user enters a non-alphabetic character, the program should indicate that it is neither uppercase nor lowercase.
- If the user enters '0', the program should exit gracefully.
- Multiple characters should be handled to ensure that only the first character is considered for case checking.
- Space / Enter key should be handled to prevent errors and ensure that the user is prompted again for valid input.
- Symbols and numbers should be handled to indicate that they are neither uppercase nor lowercase.
*/

#include <iostream>
#include <cctype> // For isupper(), islower(), isalpha()
using namespace std;

// Function to determine if character is uppercase or lowercase
string checkCase(char ch)
{
    if (isupper(ch))
    {
        return "Uppercase";
    }
    else
    {
        return "Lowercase";
    }
}

int main()
{
    char ch;

    // Keep prompting until valid input is received
    while (true)
    {
        cout << "Enter a character: ";
        cin >> ch;

        // Check 1: Was the input a valid letter?
        if (!isalpha(ch))
        {
            cout << "Error: '" << ch << "' is not a letter. Please enter an alphabet character." << endl;
            continue;
        }

        // Valid input — exit loop
        break;
    }

    // Call function to check case
    string result = checkCase(ch);

    // Display result
    cout << "'" << ch << "' is " << result << "." << endl;

    return 0;
}