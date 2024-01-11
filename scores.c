#include <stdio.h>

// Constant
const int N = 3;

// Prototype
float average(int length, int array[]);


int main(void)
{
    // Get scores
    int scores[N];
    for (int i = 0; i < N; i++)
    {
        scores[i];
        printf("Score: ");
        scanf("%d", &scores[i]);
    }

    // printf("Average: %.2f\n", (scores[0] + scores[1] + scores[2]) / 3.0);
    printf("Average: %f\n", average(N, scores));
}

float average(int length, int array[])
{
    // Calculate average
    int sum = 0;
    for(int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    return sum / (float) length;
}