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

