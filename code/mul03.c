// mul03.c: using long longs
#include <stdio.h>

long long get_long_long(char *prompt);

int main(void)
{
    long long a = get_long_long("a: ");
    long long b = get_long_long("b: ");
    printf("Answer: %lli\n", a * b);
}

long long get_long_long(char *prompt)
{
    printf("%s", prompt);
    long long input;
    scanf("%lli", &input);
    return input;
}