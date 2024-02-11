#include <stdio.h>

int main(){

    // Declare an  variable to store the input year from user.
    int inputYear;

    // Show to the user to enter a year.
    printf("Please input a year: ");
    scanf("%d", &inputYear);

    /* To get a  a leap year, check 
       A leap year is exactly divisible by 4. 
       but, centuries (years divisible by 100), while they are still divisible by 4, 
       they are not leap years unless they are also divisible by 400. 
       This means that the year 2000 was a leap year although 1900 was not.  */

    if ((inputYear % 4 == 0 && inputYear % 100 != 0) || inputYear % 400 == 0){
        printf("%d is a leap year.\n", inputYear); // If the year is leap year
    }
    else{
        printf("%d is not a leap year.\n", inputYear); // If the year is not leap year.
    }

    // if the program ends successfully.
    return 0;
}