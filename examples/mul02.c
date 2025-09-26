// mul02.c: using longs
#include <stdio.h>

long get_long(char *prompt);

int main(void)
{
    long a = get_long("a: ");
    long b = get_long("b: ");
    printf("Answer: %li\n", a * b);
}

long get_long(char *prompt)
{
    printf("%s", prompt);
    long input;
    scanf("%li", &input);
    return input;
}