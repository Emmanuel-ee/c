#include <stdio.h>
#include <string.h>


// int stringLength(char name[]);

int main(void)
{
    char name[12];
    printf("Name: ");
    scanf("%s", name);

    // int length = stringLength(name);
    int length = strlen(name);
    printf("%i\n", length);
    
    return 0;
}


// int stringLength(char name[])
// {
//     int n = 0;
//     while (name[n] != '\0')
//     {
//         n++;
//     }
//     return n; 
// }