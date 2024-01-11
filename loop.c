#include <stdio.h>

void moo(int n);

int main(void)
{
    int i = 3;
    // int k = 3;
    while (i > 0)
    {
        printf("meow\n");
        i--;
    }

    for (int j = 0; j < 3; j++)
    {
        printf("woof\n");
    }

    // while (k > 0)
    // {
    //     moo();
    //     k--;
    // }

    moo(3);
    
    return 0;
}

void moo(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("moo\n");
    }
}