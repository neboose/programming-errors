// mul01.c: the base
#include <stdio.h>

int get_int(char *prompt);

int main(void)
{
    int a = get_int("a: ");
    int b = get_int("b: ");
    printf("Answer: %i\n", a * b);
}

int get_int(char *prompt)
{
    printf("%s", prompt);
    int input;
    scanf("%i", &input);
    return input;
}