#include <stdio.h>

float get_float(char *prompt);

int main(void)
{
    float answer = get_float("Q1: 5 / 2  ");
    if (answer == 5.0 / 2)
    {
        printf("Correct!\n");
    }
    else
    {
        printf("Incorrect!\n");
    }
    return 0;
}

float get_float(char *prompt)
{
    printf("%s", prompt);
    float input;
    scanf("%f", &input);
    return input;
}