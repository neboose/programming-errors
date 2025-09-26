// calc01.c: the base
#include <stdio.h>

float get_float(char *prompt);

int main(void)
{
    float a = get_float("a: ");
    float b = get_float("b: ");
    printf("Answer: %f\n", a / b);
}

float get_float(char *prompt)
{
    printf("%s", prompt);
    float input;
    scanf("%f", &input);
    return input;
}