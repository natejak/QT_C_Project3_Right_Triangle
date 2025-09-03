/*
  * The program calculates the area of a right triangle
  *
  * Tekijä: Kajetan Zelech-Alatarvas
  * Data: 03.09.2025
 */

#include <stdio.h> // Preprocessor directive: includes standard input/output library

// Main program
int main()
{

// setting up variables
  float USR_ENTRY_Base;        // User input BASE
  float USR_ENTRY_Height;      // User input Height
  float OUT_Area;              // Area of the triangle


// Loop ask as long as values are >0

    do {
      printf("Enter base of your trinagle: ");
        scanf(" %f", &USR_ENTRY_Base);   // space before %f skips the newline left in the buffer

        if (USR_ENTRY_Base <= 0 ) { // Must be > 0
            printf("Invalid input! Please provide number bigger than 0\n");
        }
    } while (USR_ENTRY_Base <= 0);// Repeat until valid input is provided

    do {
      printf("Enter high of your trinagle: ");
        scanf(" %f", &USR_ENTRY_Height);   // space before %f skips the newline left in the buffer

        if (USR_ENTRY_Height <= 0 ) { // Must be > 0
            printf("Invalid input! Please provide number bigger than 0\n");
        }
    } while (USR_ENTRY_Height <= 0);// Repeat until valid input is provided

  OUT_Area = 0.5 * USR_ENTRY_Base * USR_ENTRY_Height;

    printf("Provided base: %f \nProvided height: %f \nThe area of the triangle is: %f", USR_ENTRY_Base, USR_ENTRY_Height, OUT_Area);

    return 0;
}
