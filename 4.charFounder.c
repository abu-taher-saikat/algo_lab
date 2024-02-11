#include <stdio.h>

int main() {
    char c;

    // get input character
    printf("Enter a letter: ");
    scanf("%c", &c);

    // uppercase
    if (c >= 'A' && c <= 'Z')
        printf("%c is a capital letter.\n", c);
        
    // lowercase
    else if (c >= 'a' && c <= 'z')
        printf("%c is a small letter.\n", c);

    // not an alphabet
    else
        printf("%c is not a letter.\n", c);

    return 0;
}