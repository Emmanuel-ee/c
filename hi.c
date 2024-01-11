#include <stdio.h>

int main(void)
{
    // char c1 = 'H';
    // char c2 = 'I';
    // char c3 = '!';

    // printf("%c %c %c\n", c1, c2, c3);
    // printf("%i %i %i\n", c1, c2, c3);
    char s[] = "HI!";
    char t[] = "BYE!";

    // Using char pointers
    const char *words[2]; // Use const char* to point to string literals
    words[0] = "HI!";
    words[1] = "BYE!";

    printf("%s\n", s);
    // printf("%c%c%c\n", s[0], s[1], s[2]);
    // printf("%i%i%i\n", s[0], s[1], s[2]);

    printf("%s\n", t);
    // printf("%c%c%c\n", t[0], t[1], t[2], t[3]);
    // printf("%i%i%i\n", t[0], t[1], t[2], t[3]);

    printf("%s\n", words[0]);
    printf("%s\n", words[1]);
}
