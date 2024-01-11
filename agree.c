#include <stdio.h>

int main(void)
{
    // Create an integer variable that will store the number we get from the user
    int myNum;
    char c;

    // Ask the user to type a number
    printf("Type a number: \n");

    // Get and save the number the user types
    scanf("%d", &myNum);

    // Output the number the user typed
    printf("Your number is: %d\n", myNum);

    // Prompt user to agree
    printf("Do you agree? ");
    // Get and save the character the user types
    scanf(" %c", &c); // Use a space before %c to skip any leading whitespace

    // Check whether agreed
    if (c == 'Y' || c == 'y')
    {
        printf("Agreed.\n");
    }
    else if (c == 'N' || c == 'n')
    {
        printf("Not agreed.\n");
    }
    else
    {
        printf("Invalid input.\n");
    }

    return 0;
}
