#include <stdio.h>
#include <string.h>

int add(int x, int y);
int subtract(int x, int y);
int multiply(int x, int y);
int divide(int x, int y);

int main(void)
{
    int a;
    int b;
    char operation[10]; // Adjust the size based on your needs

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("Enter your operation (+, -, *, /): ");
    scanf("%s", operation);

    int result;

    if (strcmp(operation, "+") == 0)
    {
        result = add(a, b);
    }
    else if (strcmp(operation, "-") == 0)
    {
        result = subtract(a, b);
    }
    else if (strcmp(operation, "*") == 0)
    {
        result = multiply(a, b);
    }
    else if (strcmp(operation, "/") == 0)
    {
        result = divide(a, b);
    }
    else
    {
        printf("Invalid operation\n");
        return 1; // indicating an error
    }

    printf("The result of your operation is: %d\n", result);

    return 0;
}

int add(int x, int y)
{
    return x + y;
}

int subtract(int x, int y)
{
    return x - y;
}

int multiply(int x, int y)
{
    return x * y;
}

int divide(int x, int y)
{
    if (y != 0)
    {
        return x / y;
    }
    else
    {
        printf("Error: Division by zero\n");
        return 0;
    }
}
