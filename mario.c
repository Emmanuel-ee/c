#include <stdio.h>

int main(void)
{
    int n;

    // Prompt user for positive integer
    do
    {
        printf("Size: ");
        if (scanf("%d", &n) == 1 && n > 0)
        {
            // Print an n-by-n grid of bricks
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    printf("#");
                }
                printf("\n");
            }
        }
        else
        {
            // Clear the input buffer in case of non-integer input
            while (getchar() != '\n');
            printf("Invalid input. Please enter a positive integer.\n");
        }
    } while (n < 1);

    return 0;
}
