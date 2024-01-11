#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[12];

    printf("Input: ");
    scanf("%s", s);
    // int length = strlen(s)
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c", s[i]);
    }
    printf("\n");
}