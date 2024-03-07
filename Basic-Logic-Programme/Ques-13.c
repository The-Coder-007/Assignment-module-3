// Find character value from ascii

#include <stdio.h>
int main()
{
    char c ;
    
    printf("Enter the character :");
    scanf("%c", &c);

    // %d displays the integer value of a character
    // %c displays the actual character
    printf("The ASCII value of %c is %d", c, c);
    return 0;
}