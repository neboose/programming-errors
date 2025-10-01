// quiz05.c: use a float variable
#include <stdio.h>

float get_float(char *prompt);

int main(void)
{
    float answer = get_float("Q1: 5 / 2  ");
    float a = 5;
    if (answer == a / 2)
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