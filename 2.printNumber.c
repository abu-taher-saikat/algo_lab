#include <stdio.h>
int main()
{
    int num, counter; // declaration of variables
    
    printf("Enter a positive integer: "); // User prompt
    scanf("%d", &num); // Store user input

    // Loop from 1 to the number entered by the user
    for (counter = 1; counter <= num; counter++)
    {
        printf("%d ", counter); // Print the current counter value
    }
    printf("\n"); // Print a newline character after the loop
    return 0; // Signal that the program has finished safely
}