#include <stdio.h>

int main(){

    // Declare an  variable to store the input year from user.
    int inputYear;

    // Show to the user to enter a year.
    printf("Please input a year: ");
    scanf("%d", &inputYear);

    /* To identify a leap year: 
    - Must be divisible by 4 
    - Centurial years must be divisible by 400 
    (e.g., 2000 = leap year, 1900 = not). 
    */

    if ((inputYear % 4 == 0 && inputYear % 100 != 0) || inputYear % 400 == 0){
        printf("%d is a leap year.\n", inputYear); // If the year is leap year
    }
    else{
        printf("%d is not a leap year.\n", inputYear); // If the year is not leap year.
    }

    // if the program ends successfully.
    return 0;
}