// mul04.c: using unsigned ints
#include <stdio.h>

unsigned int get_unsigned_int(char *prompt);

int main(void)
{
    unsigned int a = get_unsigned_int("a: ");
    unsigned int b = get_unsigned_int("b: ");
    printf("Answer: %u\n", a * b);
}

unsigned int get_unsigned_int(char *prompt)
{
    printf("%s", prompt);
    unsigned int input;
    scanf("%u", &input);
    return input;
}