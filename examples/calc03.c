#include <stdio.h>

double get_double(char *prompt);

int main(void)
{
    double a = get_double("a: ");
    double b = get_double("b: ");
    printf("Answer: %.10f\n", a / b);
}

double get_double(char *prompt)
{
    printf("%s", prompt);
    double input;
    scanf("%lf", &input);
    return input;
}