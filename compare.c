#include <stdio.h>

int main(void)
{
    int a;
    int b;

    printf("What is a?\n");
    scanf("%d", &a);

    printf("What is b?\n");
    scanf("%d", &b);

    printf("a is %d and b is %d\n", a, b);

    if (a < b)
    {
        printf("a is less than b\n");
    }
    else if (a > b)
    {
        printf("a is greater than b\n");
    }
    else
    {
        printf("a is equal to b\n");
    }

    return 0;
}
